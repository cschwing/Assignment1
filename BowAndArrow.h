#pragma once
/*
 * File:   BowAndArrow.h
 * Author: Connor Schwinghammer <cas15c@my.fsu.edu>
 *
 * Created on January 31, 2019, 3:04 AM
 */

#include <string>
#include "Weapon.h"

#ifndef BOWANDARROW_H
#define BOWANDARROW_H

 /**
  * Defines the behavior of a bow and arrow ( Has 50% chance of ignoring 80% of armor)
  */
class BowAndArrow : public Weapon {
public:

	BowAndArrow() : Weapon("Bow and arrow", 65.0) { //Calls Weapon(name, hitpoints) constructor with values Bow and arrow and 65
	}

	virtual ~BowAndArrow() {};

	virtual double hit(double armor);

};

#endif /* BOWANDARROW */

