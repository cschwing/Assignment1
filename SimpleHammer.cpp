/*
 * File:   SimpleHammer.cpp
 * Author: Connor Schwinghammer <cas15c@my.fsu.edu>
 *
 * Created on January 30, 2019, 11:03 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
	double damage;

	/*	If  armor is less than 30, the hammer will ignore all armor points	*/
	if (armor < 30) 
		return hitPoints;
	else 
		damage = hitPoints - armor;

	if (damage < 0) {
		return 0;
	}
	return damage;
}
