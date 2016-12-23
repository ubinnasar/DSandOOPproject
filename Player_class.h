#ifndef player_class_h
#define player_class_h


#include<iostream>
#include<string>

using namespace std;

class player
{
private:
	string name;
	int health;
	int max_hp;
	int EXP; //do it in battle class maybe?
	int req_exp;
	int player_level;
	int damage;
public:
	player();
	string get_name();
	int set_maxhp();
	int damage_caused();
	void level_up();
	void death();
	//int exp_gained(); this function will work once battle class is functional
	int get_player_level();
	int get_player_health();
	int set_required_exp();
	int exp_test(); //made for test function will be removed after battle class
	void test(); //for the mid-project report
};

player::player()
{
	name = get_name();
	player_level = 1;
	EXP = 0;
	max_hp = set_maxhp();
	health = max_hp;
	req_exp = set_required_exp();
	damage = damage_caused();
}
string player::get_name()
{
	cout << "Welcome... Please Enter your name" << endl;
	cin >> name;
	return name;
}

int player::set_maxhp()
{
	max_hp = player_level * 20;
	return max_hp;
}

int player::damage_caused()
{
	damage = player_level * 4;
	return damage;
}

int player::get_player_level()
{
	return player_level;
}

int player::get_player_health()
{
	return health;
}

void player::level_up()
{
	EXP = exp_test(); //for mid-project
	if (EXP >= req_exp)
	{
		int _lvl = get_player_level();
		player_level = _lvl + 1;
		req_exp = set_required_exp();
		max_hp = set_maxhp();
		health = max_hp;
		damage = damage_caused();
	}
}

int player::set_required_exp()
{
	int _lvl = get_player_level();
	req_exp = _lvl * 5;
	return req_exp;
}

int player::exp_test()
{
	EXP = set_required_exp();
	return EXP;
}

void player::test()
{
	cout << "Player Name: " << name << endl;
	cout << "Player Health " << health << endl;
	cout << "Max Health " << max_hp << endl;
	cout << "Player Experience " << EXP << endl;
	cout << "Max Required EXP" << req_exp << endl;
	cout << "Player Level " << player_level << endl;
	cout << "Damage Caused " << damage << endl;
	cout << "\nAfter Levelling UP\n" << endl;
	level_up();
	cout << "Player Health " << health << endl;
	cout << "Max Health " << max_hp << endl;
	cout << "Player Experience " << EXP << endl;
	cout << "Max Required EXP " << req_exp << endl;
	cout << "Player Level " << player_level << endl;
	cout << "Damage Caused " << damage << endl;
}

void player::death()
{
	if (health <= 0)
	{
		cout << "Your player died." << endl;
	}
}


#endif
