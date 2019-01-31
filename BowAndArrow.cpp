/*
 * File:   BowAndArrow.cpp
 * Author: Connor Schwinghammer <cas15c@my.fsu.edu>
 *
 * Created on January 30, 2019, 11:03 PM
 */

#include "BowAndArrow.h"
#include <random>
#include <cmath>

double BowAndArrow::hit(double armor) {

	double damage;
	/* Bow and arrow has a 50% chance of ignoring 80% of armor. Otherwise, it ignores 10%*/
	if (Weapon::generateRandomInt(0, 1) == 1)
		damage = floor(hitPoints - (armor*.2));
	else
		damage = floor(hitPoints - (armor * .9));

	if (damage < 0) {
		return 0;
	}
	return damage;
}
