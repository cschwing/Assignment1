/*
 * File:   BowAndArrow.cpp
 * Author: Connor Schwinghammer <cas15c@my.fsu.edu>
 *
 * Created on January 30, 2019, 11:03 PM
 */

#include "BowAndArrow.h"
#include <random>
#include <cmath>

 /* Constructor to determine hitpoints*/
BowAndArrow::BowAndArrow()
{

}

double BowAndArrow::hit(double armor) {

	/* Bow and arrow has a 50% chance of ignoring 80% of armor. Otherwise, it ignores 10%*/
	if (generateRandomInt(0, 1) == 1)
		damage = hitPoints - (armor*.2);
	else
		damage = hitPoints - (armor * .9);

	if (damage < 0) {
		return 0;
	}
	return damage;
}

int BowAndArrow::generateRandomInt(int l, int h)
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