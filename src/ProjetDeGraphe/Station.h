/*
 * Station.h
 *
 *  Created on: 14 avr. 2015
 *      Author: geoff
 */

#ifndef Station_H_
#define Station_H_


#include <malloc.h>
#include <iostream>
class Station
{
	private :
			int data; // numéro de sommet
			Station *pred, *succ ; // pointeurs sur les Stations prédécesseur et successeur

	public :
			Station (int pdata); // constructeur
			~Station (); // destructeur
			// prototypes des méthodes
			int getData ();
			Station *getPred ();

			Station *getSucc ();
			void setPred (Station *ppred);
			void setSucc (Station *psucc);

#endif /* Station_H_ */
