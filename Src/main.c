#include <stdint.h>
#include <stdio.h> // Para poder usar printf()
#include "stm32f4xx.h"
#include "uart.h"
#include "adc.h"


int32_t valor_ADC;
//int Grados_celsius;
int main(void){


	uart2_rx_tx_init();
	pa1_adc_int();
	inicio_conversion();

	while(1){
		valor_ADC = leer_conversion();
		//Grados_celsius = 1*valor_ADC;
		printf("Valor del ADC : %d\n\r",(int)valor_ADC);
	}
}
