#ifndef RPG_H
#define RPG_H

#include <iostream>
#include <cstdlib>
#include <string>

using std::string;

class Player
{
public:
	Player()
	{
		attack = rand() % 10;
		defense = rand() % 10;
		health = 100;
	}
	std::string name(std::string null)
	{
		null = youname;
	}
	int attack()
	{

	}
	friend ostream & operator << (ostream & out, const Player&c)
	{
		out << "The attack is executed. "<<std::endl;
		return out;
	}
private:
	int health, defense, attack;
	string youname;
};
#endif
