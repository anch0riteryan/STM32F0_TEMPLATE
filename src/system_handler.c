#include <stm32f0xx.h>

#ifndef _USE_FREERTOS

void SysTick_Handler () {
}

void SVCall_Handler () {
}

void PendSV_Handler () {
}

#endif

void NMI_Handler () {
}

void HardFault_Handler () {
	while (1);
}


