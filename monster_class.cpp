#include "monster_class.h"

monster::monster()
{
	beasts = "ogre"; //will use location class to set monsters on the basis of area.
	monster_level = beast_lvl();
	monster_health = beast_health();
	monster_damage = beast_damage();
}

int monster::beast_health()
{
	monster_health = monster_level * 7;
	return monster_health;
}

int monster::beast_lvl()
{
	srand(time(NULL));
	monster_level = (rand() % 5);
	return monster_level;
}

int monster::beast_damage()
{
	monster_damage = monster_level * 3;
	return monster_damage;
}


void monster::monster_death()
{
	if (monster_health <= 0)
	{
		cout << "monster is dead" << endl;
	}
}

void monster::test()
{
	cout << endl; 
	cout << "monster name " << beasts << endl;
	cout << "difficulty: " << monster_level << endl;
	cout << "monster health " << monster_health << endl;
	cout << "damage caused by monster " << monster_damage << endl;

}
