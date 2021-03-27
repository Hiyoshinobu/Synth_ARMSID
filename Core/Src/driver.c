/*
 * driver.c
 *
 *  Created on: Mar 27, 2021
 *      Author: Hiyoshinobu
 */

#include "gpio.h"
#include "driver.h"

void ecrire_adresse(uint8_t adresse)
{
	HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, (adresse >> 0) & 1);
	HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, (adresse >> 1) & 1);
}
