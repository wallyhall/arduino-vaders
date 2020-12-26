/* cite: https://www.best-microcontroller-projects.com/arduino-digitalwrite.html
 * Significantly faster digital pin read/write
 */
#define setPin8() PORTB = PORTB | B00000001
#define setPin9() PORTB = PORTB | B00000010
#define clrPin8() PORTB = PORTB & B11111110
#define clrPin9() PORTB = PORTB & B11111101

unsigned char x, y;

void setup() {
 // Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  digitalWrite(8, LOW);

  // cite: http://www.8bit-era.cz/arduino-timer-interrupts-calculator.html
  //
  // TIMER 2 for interrupt frequency 1000000 Hz:
  noInterrupts();
  // Clear registers
  TCCR2A = 0;
  TCCR2B = 0;
  TCNT2 = 0;

  // 500000 Hz (16000000/((0+1)*32))
  OCR2A = 0;
  // CTC
  TCCR2A |= (1 << WGM21);
  // Prescaler 32
  TCCR2B |= (1 << CS21) | (1 << CS20);
  // Output Compare Match A Interrupt Enable
  TIMSK2 |= (1 << OCIE2A);
  interrupts();
}

int pos = 0;
ISR(TIMER2_COMPA_vect) {
  // broad sync
  switch (pos) {
    case 0:    //1
    case 9888: //310
      clrPin9();
      clrPin8();
      break;
    case 16:   //1+32us
    case 32:   //2
    case 48:   //2+32us
    case 64:  //3
    case 80:  //3+32us
    case 96:  //4
    case 112:  //4+32us
    case 128:  //5
    case 144:  //5+32us
    case 9904://310+32us
    case 4952://311
    case 9936://311+32us
    case 9952://312
    case 9968://312+32us
      clrPin9();
      break;
      
    case 14:  //1+28us (-4us before mid)
    case 30:  //1 end rise
    case 46:  //2+28us (-4us before mid)
    case 62: //2 end rise
    case 78: //3+28us (-4us before mid)
    case 81: //3+34us second rise
    case 97: //4+4us
    case 113: //4+34us second rise
    case 129: //5+4us
    case 145: //5+34us second rise
    case 9889: //310+2us
    case 9905: //310+34us
    case 9921: //311+2us
    case 9937: //311+34us
    case 9953: //312+2us
    case 9969: //312+34us
      // gap
      setPin9();
      break;
    
    case 9983:
      pos = -1;
      break;

    default:
      // lines 6 through 309
      if (pos >= 160 && pos < 9888) {
        switch (pos % 32) {
          // start of line
          case 0:
            clrPin9();
            clrPin8();
            break;
          // start of back porch
          case 2:
            setPin9();
            break;
          // start of line rendering
          case 5:
            setPin8();
            break;
          // start of front porch
          case 31:
            clrPin8();
        }
      }
      break;
  }

  pos++;
}

//static unsigned int y = 0;
void loop() {
 // Serial.println(pos);
/*  // broad sync
  for (char i = 0; i < 5; i++) {
    clrPin9();
    delayMicroseconds(28);

    // gap
    setPin9();
    delayMicroseconds(4);
  }

  // short sync
  for (unsigned char i = 0; i < 5; i++) {
    // short pulse
    clrPin9();
    delayMicroseconds(2);

    setPin9();
    delayMicroseconds(30);
  }

  // including scanline 23
  for (uint16_t i = 0; i < 18; i++) {
    // h-sync
    clrPin9();
    delayMicroseconds(4);

    setPin9();
    delayMicroseconds(60);
  }

  // including scanline 309
  for (uint16_t i = 0; i < 286; i++) {
    // h-sync
    clrPin9();
    delayMicroseconds(4);

    // set blanking period
    setPin9();
    delayMicroseconds(7);

    // set white
    setPin8();
    delayMicroseconds(49);

    // front porch
    clrPin8();
    delayMicroseconds(2);
  }

  // short sync
  for (unsigned char i = 0; i < 6; i++) {
    // short pulse
    clrPin9();
    delayMicroseconds(2);

    setPin9();
    delayMicroseconds(30);
  }
  */
 delay(100);
}
