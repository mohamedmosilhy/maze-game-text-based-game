#include "character.h"

character::character(int h = 0, int d = 0, int a = 0) 
{
	health = h;
	defence = d;
	attack = a;
}

void character::set_health(int h)
{
	health = h;
}

void character::set_defence(int d)
{
	defence = d;
}

void character::set_attack(int a)
{
	attack = a;
}

int character::get_health()
{
	return health;
}

int character::get_defence()
{
	return defence;
}

int character::get_attack()
{
	return attack;
}

void character::damage()
{
	health -= 40;
	defence -= 40;
	attack -= 25;
	if (health <= 0) {
		health = 0;
	}
	if (defence <= 0) {
		defence = 0;
	}
	if (attack <= 0) {
		attack = 0;
	}
}



void character::damageforplayer()
{
		health -= 25;
		defence -= 25;
		attack -= 50;
		if (health <= 0) {
			health = 0;
		}
		if (defence <= 0) {
			defence = 0;
		}
		if (attack <= 0) {
			attack = 0;
		}

	}



bool character::ifdead()
{
	if (health == 0)
		return true;
	else 
	return false;
}

character::character()
{
}


