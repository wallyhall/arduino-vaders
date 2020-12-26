/* cite: https://www.best-microcontroller-projects.com/arduino-digitalwrite.html
 * Significantly faster digital pin read/write
 */
#define SET_PIN_8() PORTB = PORTB | B00000001
#define SET_PIN_9() PORTB = PORTB | B00000010
#define CLR_PIN_8() PORTB = PORTB & B11111110
#define CLR_PIN_9() PORTB = PORTB & B11111101

/**
 * Regenerate with:
 * 
#import <stdio.h>
#import <string.h>
int main() {
	for (unsigned int x = 0; x <= 255; x++) {
		char ops[512] = "";
		for (unsigned char y = 128; y > 0; y = y >> 1) {
			strcat(ops, ((x & y) > 0) ? "SET" : "CLR");
			strcat(ops, "_PIN_8(); ");
		}
		printf("static inline void sl_%d() { %s }\n", x, ops);
	}
}
 *
 **/

static inline void sl_0() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_1() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_2() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_3() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_4() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_5() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_6() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_7() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_8() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_9() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_10() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_11() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_12() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_13() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_14() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_15() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_16() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_17() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_18() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_19() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_20() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_21() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_22() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_23() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_24() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_25() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_26() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_27() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_28() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_29() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_30() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_31() { CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_32() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_33() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_34() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_35() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_36() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_37() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_38() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_39() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_40() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_41() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_42() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_43() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_44() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_45() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_46() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_47() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_48() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_49() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_50() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_51() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_52() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_53() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_54() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_55() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_56() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_57() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_58() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_59() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_60() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_61() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_62() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_63() { CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_64() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_65() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_66() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_67() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_68() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_69() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_70() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_71() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_72() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_73() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_74() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_75() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_76() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_77() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_78() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_79() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_80() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_81() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_82() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_83() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_84() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_85() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_86() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_87() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_88() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_89() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_90() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_91() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_92() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_93() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_94() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_95() { CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_96() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_97() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_98() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_99() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_100() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_101() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_102() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_103() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_104() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_105() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_106() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_107() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_108() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_109() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_110() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_111() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_112() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_113() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_114() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_115() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_116() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_117() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_118() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_119() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_120() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_121() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_122() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_123() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_124() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_125() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_126() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_127() { CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_128() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_129() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_130() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_131() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_132() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_133() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_134() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_135() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_136() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_137() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_138() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_139() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_140() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_141() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_142() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_143() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_144() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_145() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_146() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_147() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_148() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_149() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_150() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_151() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_152() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_153() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_154() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_155() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_156() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_157() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_158() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_159() { SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_160() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_161() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_162() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_163() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_164() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_165() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_166() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_167() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_168() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_169() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_170() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_171() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_172() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_173() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_174() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_175() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_176() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_177() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_178() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_179() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_180() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_181() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_182() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_183() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_184() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_185() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_186() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_187() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_188() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_189() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_190() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_191() { SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_192() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_193() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_194() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_195() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_196() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_197() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_198() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_199() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_200() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_201() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_202() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_203() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_204() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_205() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_206() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_207() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_208() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_209() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_210() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_211() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_212() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_213() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_214() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_215() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_216() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_217() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_218() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_219() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_220() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_221() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_222() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_223() { SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_224() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_225() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_226() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_227() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_228() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_229() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_230() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_231() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_232() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_233() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_234() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_235() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_236() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_237() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_238() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_239() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_240() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_241() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_242() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_243() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_244() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_245() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_246() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_247() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_248() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_249() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_250() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_251() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8(); SET_PIN_8();  }
static inline void sl_252() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); CLR_PIN_8();  }
static inline void sl_253() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8(); SET_PIN_8();  }
static inline void sl_254() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); CLR_PIN_8();  }
static inline void sl_255() { SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8(); SET_PIN_8();  }

#define SPRITE_MAP_HEIGHT 34
#define SPRITE_MAP_WIDTH 8

void (*sprites[4][8])(void) = {
  {
    sl_0,     // 00000000
    sl_0,     // 00000000
    sl_0,     // 00000000
    sl_255,   // 11111111
    sl_255,   // 11111111
    sl_0,     // 00000000
    sl_0,     // 00000000
    sl_0      // 00000000
  },
  {
    sl_0,     // 00000000
    
    sl_24,    // 00011000
    sl_60,    // 00111100
    sl_126,   // 01111110
    sl_126,   // 01111110
    sl_60,    // 00111100
    sl_24,    // 00011000
    sl_0      // 00000000
  },
  {
    sl_0,     // 00000000
    sl_195,   // 11000011
    sl_102,   // 01100110
    sl_60,    // 00111100
    sl_60,    // 00111100
    sl_102,   // 01100110
    sl_195,   // 11000011
    sl_0      // 00000000
  },
  {
    sl_0,
    sl_0,
    sl_0,
    sl_0,
    sl_0,
    sl_0,
    sl_0,
    sl_0
  }
};

uint8_t sprite_map[SPRITE_MAP_HEIGHT][SPRITE_MAP_WIDTH];

void setup() {
  // set default sprite map
  for (uint16_t y = 0; y < SPRITE_MAP_HEIGHT; y++) {
    for (uint16_t x = 0; x < SPRITE_MAP_WIDTH; x++) {
      sprite_map[y][x] = 1;
    }
  }


 // Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

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

static void inline wait_for(uint8_t target) {
  while (target > TCNT2) {
    __asm__ __volatile__ (
      "nop"
    );
  }
  /*__asm__ __volatile__ (
      "100:\n"                            // loop start
        //"\tsub  %[target], %[tcnt2]\n"    // subtract count from target
        //"\tbrcc 100b\n"                   // branch if exceeded
        "\tcp   %[target], %[tcnt2]\n"
        "\tbrne 100b\n"
      :                                   // no clobbers
      : [target]  "a" (target),           // target count
        [tcnt2]   "a" (TCNT2)             // current count
  );*/
}
/*
*/

// borrowed from https://github.com/pkendall64/arduino-tvout/blob/master/src/video_gen.cpp
/*static void inline wait_for(uint8_t time) {
	__asm__ __volatile__ (
			"subi	%[time], 10\n"                //   
			"sub	%[time], %[tcnt2]\n\t"        //   
		"100:\n\t"                            // LOOP (repeat waiting)
			"subi	%[time], 3\n\t"               //   sub 3
			"brcc	100b\n\t"                     //   branch if carry is clear (repeat waiting)
			"subi	%[time], 0-3\n\t"             //   
			"breq	101f\n\t"                     //   branch if 0 (skip extra cycle and end)
			"dec	%[time]\n\t"                  //   dec time
			"breq	102f\n\t"                     //   branch if 0 (target precisely met, end)
			"rjmp	102f\n"                       //   relative jump
		"101:\n\t"                            // END + noop (skip extra cycle)
			"nop\n"                             //   noop
		"102:\n"                              // END
		:                                     // no clobbers
		: [time] "a" (time),                  // requested target
		[tcnt2] "a" (TCNT2)                   // timer 2 counter 
	);
}
/*
*/

byte x = 0;
uint16_t count = 1;
ISR(/*TIMER2_COMPB_vect*/ TIMER2_OVF_vect) {
  switch (count) {
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
      count = 0;
      break;
    
    default:
      if (count >= /*28*/40 && count < /*315*/305) {
        // 22 to 120 x is safe = 98 "pixels" wide (this isn't the spec - just simpler timings to start with)
        // 40 to 305 y is safe = 265 scanlines high

        // during the pre-rendering period (the sync and black level period)
        uint8_t sprite_map_row = ((count - 40) + 1) / 8;
        uint8_t sprite_map_col = 0;

        //uint8_t curent_sprite = sprite_map[sprite_map_row][sprite_map_col];
        //bool next_pixel = current_sprite; // TODO - resolve current sprite's pixel
        bool next_pixel = 0;

        byte values[25] = {
          false, true, false, true, false,
          true, false, true, false, true,
          false, true, false, true, false,
          true, false, true, false, true,
          false, true, false, true, false
        };

        // sprite number - allocate while we're in dead space
        uint8_t sprite_map_y = (count - 40) / 8;
        uint8_t sprite_y = (count - 40) % 8; 

        // wait for start of safe displaying
        uint8_t next_timing_target = 21;
        wait_for((byte)next_timing_target);

        sprites[sprite_map[sprite_map_y][0]][sprite_y]();
        sprites[sprite_map[sprite_map_y][1]][sprite_y]();
        sprites[sprite_map[sprite_map_y][2]][sprite_y]();
        sprites[sprite_map[sprite_map_y][3]][sprite_y]();
        sprites[sprite_map[sprite_map_y][4]][sprite_y]();
        sprites[sprite_map[sprite_map_y][5]][sprite_y]();
        sprites[sprite_map[sprite_map_y][6]][sprite_y]();
        sprites[sprite_map[sprite_map_y][7]][sprite_y]();

//setPin8(); clrPin8();setPin8(); clrPin8();setPin8(); clrPin8();setPin8(); clrPin8();

//        for (char x = 0; x < 10; x++) {
          // first thing to do is set the pixel (timing sensitive)
          //(values[x] == true) ? setPin8() : clrPin8();
//        }

        // finished scanlie
        CLR_PIN_8();
      }
      break;
  }
  count++;
}

void loop() {
  //Serial.println(count);
 // delay(1000);
 uint16_t pos_y = 0;
 uint16_t pos_x = 0;
 while (1) {
      uint8_t new_sprite = sprite_map[pos_y][pos_x] + 1;
      sprite_map[pos_y][pos_x] = new_sprite == 4 ? 0 : new_sprite;

      pos_y++;
      if (pos_y == SPRITE_MAP_HEIGHT) {
        pos_y = 0;
        pos_x++;
      }

      if (pos_x == SPRITE_MAP_WIDTH) {
        pos_x = 0;
      }

      for (int i = 0; i < 10000; i++) {
        __asm__ __volatile__ ( "nop" );
      }
 }
}
