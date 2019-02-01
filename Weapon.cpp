/* 
 * File:   Weapon.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include "Weapon.h"
#include <random>

std::string Weapon::getName() {
    return name;
}

double Weapon::hit() {
    return hitPoints;
}

int Weapon::generateRandomInt(int l, int h)
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