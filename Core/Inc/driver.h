/*
 * driver.h
 *
 *  Created on: Mar 27, 2021
 *      Author: Hiyoshinobu
 */

#ifndef INC_DRIVER_H_
#define INC_DRIVER_H_

void ecrire_adresse(uint8_t adresse);
void ecrire_data(uint8_t data);
void start(); // Modifie le chip select pour arreter l'envoie de donnees
void stop(); // Modifie le chip select pour arreter l'envoie de donnees
void set_read(); // Modifier RW + parametres de GPIO de D0-D7 en lecture
void set_write(); // Modifier RW + parametres de GPIO de D0-D7 en ecriture
uint8_t read_data();

#endif /* INC_DRIVER_H_ */
