#ifndef BOSS_H 
#define BOSS_H 

#include "Enemy.h"

using namespace std;

//class definition
class Boss : public Enemy {

 public:
  Boss(int startX, int startY, int wave); // Constructor takes x and y position and wave number
  virtual void takeDamage(int unchangedDamage, char type); //have enemy take damage
  
};

#endif
