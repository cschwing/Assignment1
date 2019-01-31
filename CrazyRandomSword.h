#pragma once
/*
 * File:   CrazyRandomSword.h
 * Author: Connor Schwinghammer <cas15c@my.fsu.edu>
 *
 * Created on January 30, 2019, 10:59 PM
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CrazyRandomSword_H

 /**
  * Defines the behavior of a Crazy random sword (hitpoints = 25, if armor < 30, hammer ignores
  * all armor points)
  */
class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword() : Weapon("Crazy random sword", 50.0) { //Calls Weapon(name, hitpoints) constructor with values Crazy random sword and 50 hitpoints
	}

	virtual ~CrazyRandomSword() {};

	virtual double hit(double armor);

};

#endif /* CRAZYRANOMSWORD_H */

