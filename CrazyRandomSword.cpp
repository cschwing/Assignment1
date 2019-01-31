/*
 * File:   CrazyRandomSword.cpp
 * Author: Connor Schwinghammer <cas15c@my.fsu.edu>
 *
 * Created on January 30, 2019, 11:03 PM
 */

#include "CrazyRandomSword.h"
#include <random>
#include <cmath>

/* Constructor to determine hitpoints*/
CrazyRandomSword::CrazyRandomSword()
{

}

double CrazyRandomSword::hit(double armor) {

	int ignoredArmor = (2, floor(armor / 3));				// Ignore armor in a range from 2 to 1/3 of the weapons armor
	hitPoints = Weapon::generateRandomInt(7, 100);			// hitPoints is a random integer between 7 and 100
	double damage = hitPoints - ignoredArmor();

	if (damage < 0) {
		return 0;
	}
	return damage;
}

