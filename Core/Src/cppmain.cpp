#include <array>

#include "main.h"
#include "stm32_ishihalib/hal_driver/hal_driver.hpp"
#include "stm32_ishihalib/module/sevenseg.hpp"
//#include "stm32f4xx_hal_conf.h"
#include "tim.h"

using namespace ishihalib;

void cppmain() {
	std::array<DigitalOut, 7> SSEGLeds = {
		DigitalOut(SSEG_0_GPIO_Port, SSEG_0_Pin),
		DigitalOut(SSEG_1_GPIO_Port, SSEG_1_Pin),
		DigitalOut(SSEG_2_GPIO_Port, SSEG_2_Pin),
		DigitalOut(SSEG_3_GPIO_Port, SSEG_3_Pin),
		DigitalOut(SSEG_4_GPIO_Port, SSEG_4_Pin),
		DigitalOut(SSEG_5_GPIO_Port, SSEG_5_Pin),
		DigitalOut(SSEG_6_GPIO_Port, SSEG_6_Pin)};
	SevenSegmentLED SSeg(SSEGLeds);
	DigitalOut debug_led[] = {
		DigitalOut(DBG_LED0_GPIO_Port, DBG_LED0_Pin),
		DigitalOut(DBG_LED1_GPIO_Port, DBG_LED1_Pin),
		DigitalOut(DBG_LED2_GPIO_Port, DBG_LED2_Pin),
	};
	DigitalOut mode_led[] = {
		DigitalOut(MODE_LED1_GPIO_Port, MODE_LED1_Pin),
		DigitalOut(MODE_LED2_GPIO_Port, MODE_LED2_Pin),
	};
	DigitalOut ir_led[] = {
		DigitalOut(IR_LED0_GPIO_Port, IR_LED0_Pin),
		DigitalOut(IR_LED1_GPIO_Port, IR_LED1_Pin),
		DigitalOut(IR_LED2_GPIO_Port, IR_LED2_Pin),
		DigitalOut(IR_LED3_GPIO_Port, IR_LED3_Pin),
	};
	Encoder enc(&htim1);

	DigitalOut bzr(BZR_GPIO_Port, BZR_Pin);
	debug_led[1] = 1;
	mode_led[1] = 1;
	Ticker ticker_(&htim10, 1000);
	ticker_.add_callback([&]() {
		static int i = 0;
		SSeg = ++i % 10; }, 1);
	ticker_.add_callback([&]() { debug_led[0].toggle(), debug_led[1].toggle(), debug_led[2].toggle(); }, 0.5);
	ticker_.add_callback([&]() { mode_led[0].toggle(), mode_led[1].toggle(); }, 2);
	ticker_.add_callback([&]() {
			static int cnt = 0;
			ir_led[cnt] = 0;
			cnt = (cnt + 1) % 4;
			ir_led[cnt] = 1; },
						 500000);
	while (1)
		;
}
