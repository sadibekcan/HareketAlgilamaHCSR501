/*
 * HareketAlgilamaHCSR501.c
 *
 * Created: 12.02.2022 14:22:14
 *  Author: sadib
 */ 


#include <avr/io.h>
#include "ser_il.h"

#define F_CPU 16000000

int main(void)
{
	seri_yukle(16, 19200);
    while(1)
    {
		if (bit_is_set(PINB, 0))
		{
			printf("Hareket Algýlandý...\n\n\r");
		}
		else
		{
			printf("Hareket Yok...\n\n\r");
		}
    }
}