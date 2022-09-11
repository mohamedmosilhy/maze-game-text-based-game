#pragma once
#include "item.h"
class character:public item
{
private:
	int health=0;
	int defence=0;
	int attack=0;
	int max_health = 100;
	int max_defence = 100;
	int max_attack = 100;
public:
	character( int h, int d, int a);
	
	void set_health(int h);
	void set_defence(int d);
	void set_attack(int a);
	int get_health();
	int get_defence();
	int get_attack();
	void damage();
	void damageforplayer();
	bool ifdead();
	character();

};

