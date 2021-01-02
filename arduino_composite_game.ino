#include <avr/pgmspace.h>
#include <avr/sleep.h>

/* cite: https://www.best-microcontroller-projects.com/arduino-digitalwrite.html
 * Significantly faster digital pin read/write
 */
#define SET_PIN_8() PORTB = PORTB | B00000001
#define SET_PIN_9() PORTB = PORTB | B00000010
#define CLR_PIN_8() PORTB = PORTB & B11111110
#define CLR_PIN_9() PORTB = PORTB & B11111101

#define GET_USER_INPUT() ((PIND & B11000000) ^ B11000000)

#define BUTTON_LEFT B10000000
#define BUTTON_RIGHT B01000000

#define VIDEO_HEIGHT 88
#define VIDEO_WIDTH 14

#define UX_STATE_IN_GAME 0
#define UX_STATE_WELCOME 1
#define UX_STATE_GAME_OVER 2
#define UX_STATE_WAIT_USER 3

uint8_t video_bitmap[VIDEO_HEIGHT][VIDEO_WIDTH];
uint8_t ux_state = UX_STATE_WELCOME;

bool waiting_for_frame = true;
uint8_t y = 0;
uint8_t y_sub = 2;
uint16_t pal_row_count = 1;

void clear_screen() {
  // set default sprite map
  for (uint8_t y = 0; y < VIDEO_HEIGHT; y++) {
    for (uint8_t x = 0; x < VIDEO_WIDTH; x++) {
      video_bitmap[y][x] = 0;
    }
  }
}

void render_string(const uint8_t x, uint8_t y, const char *str) {
  uint8_t strpos = 0;
  uint8_t x_local = x;
  while (str[strpos] != '\0') {
    if (str[strpos] != '\n') {
      render_character(x_local, y, str[strpos]);
      x_local++;
    } else {
      y++;
      x_local = x;
    }
    strpos++;
  }
}

inline void sleep() {
  sleep_enable();
  set_sleep_mode(SLEEP_MODE_IDLE);
  sleep_cpu();
}

void render_character(uint8_t x, uint8_t y, char c) {
  y *= 8;
  switch (c) {
    case 'A':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00111100;
      video_bitmap[y++][x] = B01100110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B10000010;
      video_bitmap[y++][x] = B10000010;
      video_bitmap[y][x] = B10000010;
      break;
    case 'B':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111100;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11111100;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y][x] = B11111100;
      break;
    case 'C':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00111110;
      video_bitmap[y++][x] = B01100000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B01100000;
      video_bitmap[y][x] = B00111110;
      break;
    case 'D':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111000;
      video_bitmap[y++][x] = B11001100;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11001100;
      video_bitmap[y][x] = B11111000;
      break;
    case 'E':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11111000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y][x] = B11111110;
      break;
    case 'F':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11111000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y][x] = B11000000;
      break;
    case 'G':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00111100;
      video_bitmap[y++][x] = B01100110;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11001110;
      video_bitmap[y++][x] = B11000010;
      video_bitmap[y++][x] = B01100110;
      video_bitmap[y][x] = B00111100;
      break;
    case 'H':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y][x] = B11000110;
      break;
    case 'I':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B00011000;
      video_bitmap[y++][x] = B00011000;
      video_bitmap[y++][x] = B00011000;
      video_bitmap[y++][x] = B00011000;
      video_bitmap[y++][x] = B00011000;
      video_bitmap[y][x] = B11111110;
      break;
    case 'J':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B00001100;
      video_bitmap[y++][x] = B00001100;
      video_bitmap[y++][x] = B00001100;
      video_bitmap[y++][x] = B00001100;
      video_bitmap[y++][x] = B11001100;
      video_bitmap[y][x] = B01111000;
      break;
    case 'K':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11001100;
      video_bitmap[y++][x] = B11011000;
      video_bitmap[y++][x] = B11110000;
      video_bitmap[y++][x] = B11011000;
      video_bitmap[y++][x] = B11001100;
      video_bitmap[y][x] = B11000110;
      break;
    case 'L':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y][x] = B11111110;
      break;
    case 'M':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11101110;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y][x] = B11010110;
      break;
    case 'N':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11100110;
      video_bitmap[y++][x] = B11110110;
      video_bitmap[y++][x] = B11110110;
      video_bitmap[y++][x] = B11011110;
      video_bitmap[y++][x] = B11001110;
      video_bitmap[y][x] = B11000110;
      break;
    case 'O':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00111000;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y][x] = B00111000;
      break;
    case 'P':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111100;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11111100;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y][x] = B11000000;
      break;
    case 'Q':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00111000;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11001110;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y][x] = B00111010;
      break;
    case 'R':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111100;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11111100;
      video_bitmap[y++][x] = B11011000;
      video_bitmap[y++][x] = B11001100;
      video_bitmap[y][x] = B11000110;
      break;
    case 'S':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00111110;
      video_bitmap[y++][x] = B01100000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y++][x] = B01111000;
      video_bitmap[y++][x] = B00001100;
      video_bitmap[y++][x] = B00000110;
      video_bitmap[y][x] = B11111100;
      break;
    case 'T':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y][x] = B00010000;
      break;
    case 'U':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y][x] = B01111100;
      break;
    case 'V':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y++][x] = B00111000;
      video_bitmap[y][x] = B00010000;
      break;
    case 'W':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11010110;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y][x] = B11101110;
      break;
    case 'X':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y++][x] = B00111000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y++][x] = B00111000;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y][x] = B11000110;
      break;
    case 'Y':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11000110;
      video_bitmap[y++][x] = B01101100;
      video_bitmap[y++][x] = B00111000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y][x] = B00010000;
      break;
    case 'Z':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B11111110;
      video_bitmap[y++][x] = B00001100;
      video_bitmap[y++][x] = B00011000;
      video_bitmap[y++][x] = B00110000;
      video_bitmap[y++][x] = B01100000;
      video_bitmap[y++][x] = B11000000;
      video_bitmap[y][x] = B11111110;
      break;
    case ' ':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y][x] = B00000000;
      break;
    case '-':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B01111100;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y][x] = B00000000;
      break;
    case '?':
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00111000;
      video_bitmap[y++][x] = B01000100;
      video_bitmap[y++][x] = B00000100;
      video_bitmap[y++][x] = B00011000;
      video_bitmap[y++][x] = B00010000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y][x] = B00010000;
      break;
    case '\1':  // triple dot
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B00000000;
      video_bitmap[y++][x] = B0000000;
      video_bitmap[y][x] = B10010010;
      break;
  }
}

void render_welcome() {
  // https://www.nongnu.org/avr-libc/user-manual/pgmspace.html
  static const uint8_t qr_code[29][4] PROGMEM = {
    {1,191,124,0},
    {125,33,189,240},
    {69,139,5,16},
    {69,40,117,16},
    {69,212,197,16},
    {125,91,181,240},
    {1,85,84,0},
    {255,243,7,248},
    {4,20,114,168},
    {67,60,66,40},
    {16,160,46,152},
    {171,13,40,48},
    {152,40,208,120},
    {242,22,115,168},
    {205,216,175,128},
    {74,215,4,96},
    {64,246,214,248},
    {126,253,198,48},
    {116,32,47,128},
    {79,47,64,96},
    {100,164,80,8},
    {255,54,231,104},
    {1,48,165,24},
    {125,151,23,64},
    {69,92,112,64},
    {69,5,90,248},
    {69,121,168,200},
    {125,13,147,144},
    {1,114,225,24}
  };

  clear_screen();

  // copy QR code
  for (uint8_t y = 0; y < 29; y++) {
    for (uint8_t x = 0; x < 4; x++) {
      video_bitmap[5 + y][4 + x] = pgm_read_byte(&(qr_code[y][x]));
    }
  }

  render_string(1, 5, "PRESENTING\1");
  wait_frames(200);

  uint8_t strpos = 0;
  const char str[] = "ARDUINO-VADERS";
  while (strpos < strlen(str)) {
    if (strpos < 8) {
      render_character(2 + strpos, 6, str[strpos]);
    } else {
      render_character(strpos - 5, 7, str[strpos]);
    }
    strpos++;

    wait_frames(25);
  }

  wait_frames(50);
  render_string(3, 9, "READY?");
}

void setup() {


  clear_screen();

 // Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

  digitalWrite(8, LOW);
 // Serial.begin(9600);
  
  // UnComment following lines for UNO-NANO Timer-2 Pins 
  pinMode(3, OUTPUT); // OC2b


  // RTM_TimerCalc 1.20,  RuntimeMicro.com
  // Timer-2 Mode_7_8Bit_Fast_TOP_is_OCRa

  TCCR2B = 0x08; // 0000 1000, Disable Timer Clock 
  TCCR2A = 0x33; // 0011 0011

  OCR2A = 64-1; // Low PWM Resolution > 1% step-size 
  OCR2B = (byte) 55; // (OCR2A * 0.86);
  TCNT2=0x0; 

  // Set Overflow Interrupt Mask Bit 
  TIMSK2 |= 1; // enable timer2 overflow interrupt
  //TIMSK2 |= (1 << OCIE2B); // enable timer2 compb interrupt
  TCCR2B |= 2; // Prescale=8, Enable Timer Clock
}

inline void wait_for(uint8_t target) {
  while (target > TCNT2 - 1);
}

ISR(/*TIMER2_COMPB_vect*/ TIMER2_OVF_vect) {
  switch (pal_row_count) {
    case 5:
      // switch to Short Sync
      //TCCR2A = 0x23; // 0010 0011
      TCCR2A = 0x33; // 0011 0011
      OCR2B = (byte) 4; // 2us (OCR2A * 0.08);
      break;
    
    case 10:
      // switch to 64us mode (scanlines)
      OCR2A = 128-1; // set for 64us mode
      OCR2B = (byte) 8; // 4us (OCR2A * 0.07);

      y = 0;
      y_sub = 2;
      break;

    case 305:
      waiting_for_frame = false;
      break;

    case 314: // 287 display lines + 18 blanks + 10 (leading 32us sections)
      OCR2A = 64-1; // reset for 32us mode
      OCR2B = (byte) 4; // 2us (OCR2A * 0.08);
      break;

    case 320: // 287 display lines + 18 blanks + 10 (leading 32us sections) + last 10 (trailing 32us sections)
      // last 32us of frame
      // entering broad sync
      TCCR2A = 0x33; // 0011 0011
      OCR2B = (byte) 55; // (OCR2A * 0.86);
      pal_row_count = 0;
      break;
    
    default:
      // 22 to 120 x is safe = 98 "pixels" wide (this isn't the spec - just simpler timings to start with)
      // 40 to 305 y is safe = 265 scanlines high
      if (pal_row_count >= 40 && pal_row_count < /*295*/ 304) {
        wait_for(17);
        __asm__ __volatile__ (
          // http://ww1.microchip.com/downloads/en/DeviceDoc/AVR-Instruction-Set-Manual-DS40002198A.pdf
          // https://www.nongnu.org/avr-libc/user-manual/inline_asm.html
          // clear reg 16
          "clr  r16\n\t"

          ".macro bit_render b\n\t"
            "bst  __tmp_reg__,\\b\n\t"     // set SREG[T] (r16) to Nth bit of supplied reg (e.g. __tmp_reg__)
            "bld  r16,0\n\t"             // copy T to bit 1 of r16
            "out  %[portb],r16\n"      // output status r16 to portb (setting the pixel on or off)"
          ".endm\n"

          ".macro nop2\n\t"
            "nop\n\t"
            "nop\n"
          ".endm\n"

          ".macro byte_render_and_inc_pointer\n\t"
            // load the current sprite
            "ld   __tmp_reg__,X+\n\t"    // resolve address in reg X, loading to __tmp_reg__, and increment pointer

            // render it (bit by bit, into reg 16)
            "bit_render 7\n\t"
            "nop2\n\t"
            "bit_render 6\n\t"
            "nop2\n\t"
            "bit_render 5\n\t"
            "nop2\n\t"
            "bit_render 4\n\t"
            "nop2\n\t"
            "bit_render 3\n\t"
            "nop2\n\t"
            "bit_render 2\n\t"
            "nop2\n\t"
            "bit_render 1\n\t"
            "nop2\n\t"
            "bit_render 0\n"
          ".endm\n"

          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n"
          "byte_render_and_inc_pointer\n" // 14 cols of bytes

            // loop if we've not finished the row - TODO: does this need unrolling?
            //"dec  %[sprite_cols]\n\t"
            //"brne sprite_render_loop\n"
          "clr r16\n"
          "out  %[portb],r16\n"
          :
          :
            // x and y (and indeed z) are pointer registers (low/high byte per reg, paired)
            "x" (&video_bitmap[y][0]),
            [portb] "I" (_SFR_IO_ADDR(PORTB)),
            [sprite_cols] "r" (8)
          : "r16"
        );

        // division by 3 is computationally expensive.
        // comparison of zero is cheap.  This repeats every 3 lines, to make square pixels.
        if (y_sub-- == 0) {
          y++;
          y_sub = 2;
        }
      }
      break;
  }
  pal_row_count++;
}

#define PLAYER_Y 80   // player Y position, which is fixed

#define LOWER_EDGE 85
#define UPPER_EDGE 5
#define LEFT_EDGE 5
#define RIGHT_EDGE 108

void game_loop() {
//  uint16_t game_ticks = 0;
  uint8_t player_x = 56;

  uint8_t ball_x = 56;
  uint8_t ball_y = 79;

  uint8_t ball_x_vel = 0;
  uint8_t ball_y_vel = -1;

  while (1) {
//    game_ticks++;
    
    switch (GET_USER_INPUT()) {
      case BUTTON_LEFT:
        if (player_x > LEFT_EDGE) {
          player_x--;
        }
        break;
      case BUTTON_RIGHT:
        if (player_x < RIGHT_EDGE - 5) {
          player_x++;
        }
        break;
    }

    // draw the player
    uint8_t player_video_mem_pos = player_x / 8;
    uint8_t player_bitshift_offset = player_x % 8;
    // clear anything to the left of the player
    video_bitmap[PLAYER_Y][player_video_mem_pos - 1] = 0;
    // draw the left and right halves of the player, if they overlap a byte of video memory
    video_bitmap[PLAYER_Y][player_video_mem_pos] = B11111000 >> (player_bitshift_offset);
    video_bitmap[PLAYER_Y][player_video_mem_pos + 1] = B11110000 << (7 - player_bitshift_offset);

// ** TODO - could do this only if the player is moving, if performance gets too tight.
    // clear where the ball was last positioned (precisely, so as to minimise artefacts on other rendered things)
    video_bitmap[ball_y][ball_x / 8] &= (B11111111 ^ (B10000000 >> (ball_x % 8)));
    // calculate new ball position
    ball_y += ball_y_vel;
    ball_x += ball_x_vel;
    // redirect ball if it's bounced top/bottom
    if (ball_y < UPPER_EDGE || ball_y > LOWER_EDGE) {
      ball_y_vel = 0 - ball_y_vel;
    // redirect ball if it's bounced off the player
    } else if (ball_y_vel > 0 && (ball_y == PLAYER_Y - 1) && (ball_x >= player_x && ball_x <= player_x + 5)) {
      ball_y_vel = 0 - ball_y_vel;
      ball_x_vel = ball_x - player_x - 2;
    }
    // redirect ball if it's bounced off the left/right
    if (ball_x < LEFT_EDGE || ball_x > RIGHT_EDGE) {
      ball_x_vel = 0 - ball_x_vel;
    }
    // render the new ball position
    video_bitmap[ball_y][ball_x / 8] = B10000000 >> (ball_x % 8);

    wait_frames(3);
  }
}

/**
 * something funky happens here with the GCC optimisations.
 * it causes a crash?  disabling optimisations fixes it.
 */
#pragma GCC push_options
#pragma GCC optimize ("O0")
inline void wait_frame() {
  waiting_for_frame = true;
  while (waiting_for_frame) {
    sleep();
  }
}
#pragma GCC pop_options

inline void wait_frames(uint16_t frames) {
  while (frames-- > 0) {
    wait_frame();
  }
}

#pragma GCC push_options
#pragma GCC optimize ("O0")
void wait_user_input() {
  while (GET_USER_INPUT() == 0) {
    sleep();
  }
  
  // make sure we exit cleanly on a frame start.
  wait_frame();
}
#pragma GCC pop_options

void loop() {
    switch (ux_state) {
      case UX_STATE_IN_GAME:
        game_loop();
        // TODO - handle game result (win/loose, score etc)
        break;
      
      case UX_STATE_WELCOME:
        render_welcome();
        ux_state = UX_STATE_WAIT_USER;
        break;
      
      case UX_STATE_GAME_OVER:
        //render_score();
        clear_screen();
        render_string(1, 1, "GAME OVER");
        wait_frames(100);
        ux_state = UX_STATE_WELCOME;
        break;
      
      case UX_STATE_WAIT_USER:
        wait_user_input();
        clear_screen();
        ux_state = UX_STATE_IN_GAME;
        break;
    }

    // this must all be executable in less than between-frame rendering, less interrupt handling time
    video_bitmap[0][0]++;
  
      //for (int i = 0; i < 10000; i++) {
       // __asm__ __volatile__ ( "nop" );
     // }
}
