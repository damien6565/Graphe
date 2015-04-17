/*
 * Station.cpp
 *
 *  Created on: 14 avr. 2015
 *      Author: geoff
 */

#include "Station.h"

// Implémentation du constructeur et du destructeur
Station::Station (int pdata) { data = pdata ; pred = nullptr ;  succ = nullptr; }
Station::~Station () { std::cout << "Destruction de la Station" << std::endl; }

// Implémentation des méthodes
int Station::getData () { return data ; }

Station *Station::getPred () { return pred ; }

Station *Station::getSucc () { return succ ; }

void Station::setPred (Station *ppred) { pred = ppred ; }

void Station::setSucc (Station *psucc) { succ = psucc ; }
