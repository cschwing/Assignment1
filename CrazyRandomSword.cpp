/*
 * File:   CrazyRandomSword.cpp
 * Author: Connor Schwinghammer <cas15c@my.fsu.edu>
 *
 * Created on January 30, 2019, 11:03 PM
 */

#include "CrazyRandomSword.h"
#include <random>
#include <cmath>

double CrazyRandomSword::hit(double armor) {

	int ignoredArmor = (2, floor(armor / 3));				// Ignore armor in a range from 2 to 1/3 of the weapons armor
	double damage = floor(hitPoints - (armor - ignoredArmor));

	if (damage < 0) {
		return 0;
	}
	return damage;
}

