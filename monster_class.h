#ifndef monster_class_h
#define monster_class_h

#include "player_class.h"
#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
using namespace std;

class monster
{
private:
	string beasts;
	int monster_health;
	int monster_level;
	int monster_damage;
public:
	monster();
	int beast_damage();
	int beast_lvl();
	int beast_health();
	void monster_death();
	void test();
};


#endif