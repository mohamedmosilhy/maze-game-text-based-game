#include "player.h"

player::player()
{
	x_prev = 0;
	y_prev = 0;
	
}

void player::additem()
{
	int x;
	if (get_health() != 100) {
		x = 50 + get_health();
		set_health(x);
	}
	x = 0;
	if (get_attack() != 100) {
		x = 50 + get_attack();
		set_attack(x);
	}
	x = 0;
	if (get_defence() != 100) {
		x = 50 + get_defence();
	set_defence(x);
}
	if (get_health() >= 100) {
		set_health(100);
	}
	if (get_attack() >= 100) {
		set_attack(100);
	}
	if (get_defence() >= 100) {
		set_defence(100);
	}
}
void player::showplayer()
{
	cout << " player informations: " << endl;
	if (get_attack() > 0) {
		cout << "attack: " << get_attack() << endl;
	}
	else
		cout << "attack: " << 0 << endl;
	if (get_defence() > 0) {
		cout << "defence: " << get_defence() << endl;
	}
	else
		cout << "defence: " << 0 << endl;
	if (get_health() > 0) {
		cout << "health: " << get_health() << endl;
	}
	else
		cout << "health: " << 0 << endl;
}


player::player(int x, int y, int h, int d, int a):character(h,d,a)
{
	x_prev = x;
	y_prev = y;
	
}

void player::set_name(string n)
{
	player_name = n;
}

string player::get_name()
{
	return player_name;
}

void player::set_x_prev(int x)
{
	x_prev = x;
}

void player::set_y_prev(int y)
{
	y_prev = y;
}

int player::get_x_prev()
{
	return x_prev;
}

int player::get_y_prev()
{
	return y_prev;
}

