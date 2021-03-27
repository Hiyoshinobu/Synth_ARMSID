/*
 * sdk.c
 *
 *  Created on: Mar 27, 2021
 *      Author: Hiyoshinobu
 */

#include "sdk.h"
#include "driver.h"
#include "gpio.h"



void ecrire_frequence(uint16_t frequence, uint8_t channel)
{
	ecrire_adresse(0x00); // ==>
	ecrire_data(frequence);
	set_write(); // Definit mes gpio en ecriture
	start();
	stop();

}

uint8_t lire_osc3()
{
	ecrire_adresse(0x1b);
	set_read();
	start();
	stop();
	return read_data();
}


//  return freq * 2 ^ ((n - 48) / 12)
