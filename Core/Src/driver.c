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
	HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, (adresse >> 2) & 1);
	HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, (adresse >> 3) & 1);
	HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, (adresse >> 4) & 1);
}

void ecrire_data(uint8_t data)
{
	HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, (data >> 0) & 1);
	HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, (data >> 1) & 1);
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, (data >> 2) & 1);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, (data >> 3) & 1);
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, (data >> 4) & 1);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, (data >> 5) & 1);
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, (data >> 6) & 1);
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, (data >> 7) & 1);
}



