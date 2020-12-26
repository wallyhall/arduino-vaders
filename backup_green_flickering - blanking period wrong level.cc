/* cite: https://www.best-microcontroller-projects.com/arduino-digitalwrite.html
 * Significantly faster digital pin read/write
 */
#define setPin8() PORTB = PORTB | B00000001
#define setPin9() PORTB = PORTB | B00000010
#define clrPin8() PORTB = PORTB & B11111110
#define clrPin9() PORTB = PORTB & B11111101

#include <TVout.h>
#include <fontALL.h>

unsigned char x, y;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  digitalWrite(8, LOW);
}

//static unsigned int y = 0;
void loop() {
  // broad sync
  for (char i = 0; i < 5; i++) {
    clrPin9();
    delayMicroseconds(28);

    // gap
    setPin9();
    delayMicroseconds(4);
  }

  // short sync
  for (unsigned char i = 0; i < 5; i++) {
    clrPin9();
    delayMicroseconds(2);

    // short pulse
    setPin9();
    delayMicroseconds(30);
  }

  for (uint16_t i = 0; i < 16; i++) {
    // h-sync
    clrPin9();
    delayMicroseconds(4);

    // short pulse
    setPin9();
    delayMicroseconds(60);
  }

  for (uint16_t i = 0; i < 287; i++) {
    // h-sync
    clrPin9();
    delayMicroseconds(4);

    // short pulse
    setPin9();
    delayMicroseconds(60);
  }

  // short sync
  for (unsigned char i = 0; i < 6; i++) {
    clrPin9();
    delayMicroseconds(2);

    // short pulse
    setPin9();
    delayMicroseconds(30);
  }
}
