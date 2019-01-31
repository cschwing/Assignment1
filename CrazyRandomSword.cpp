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

	int ignoredArmor = (2, floor(armor / 3));		// Ignore armor in a range from 2 to 1/3 of the weapons armor
	hitPoints = generateRandomInt(7, 100);			// hitPoints is a random integer between 7 and 100
	double damage = hitPoints - ignoredArmor();

	if (damage < 0) {
		return 0;
	}
	return damage;
}

int CrazyRandomSword::generateRandomInt(int l, int h)
{
	/*
	*	Partial code from: Cubbi @ StackOverflow
	*   stackoverflow.com/questions/7560114/random-number-c-in-some-range
	*/
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 eng(rd()); // seed the generator
	std::uniform_int_distribution<> distr(l, h); // define the range

	return distr(eng); // return a random int

}

}