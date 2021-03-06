/*
Project Group: Chris Groce, Kevin McGinn, Nick Taylor
CSE 20212
Final draft: 5/2/2012

Puny.cpp

This is the implementation for the Puny class,
which inherits from Enemy

The Puny enemy is the basic enemy type

*/

#include "Enemy.h"
#include "Puny.h"
#include <cmath>

using namespace std;

Puny::Puny(int startX, int startY, int wave) : Enemy(startX, startY) { // constructor; uses member initialization sytax to create an enemy of
    //initialize values
    initHealth(10*pow(1.5,wave-1));  //health is based off teh wave                                                // type "Puny"
    initType('p');
    initValue(15*((wave+3)/3)); // value increments by 15 every 5 waves
}


void Puny::takeDamage(int unchangedDamage, char type) { // causes the ememy to take damage of specified type

	if(type=='s'){
		loseHealth(unchangedDamage/4);
	}
	else{
		loseHealth(unchangedDamage); //takes raw damage, regardless of type
	}

}
