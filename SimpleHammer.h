/*
 * File:   SimpleHammer.h
 * Author: Connor Schwinghammer <cas15c@my.fsu.edu>
 *
 * Created on January 30, 2019, 10:59 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

 /**
  * Defines the behavior of a simple hammer (hitpoints = 25, if armor < 30, hammer ignores
  * all armor points)
  */
class SimpleHammer : public Weapon {
public:

	SimpleHammer() : Weapon("Simple hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 40.0
	}

	virtual ~SimpleHammer() {};

	virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */

