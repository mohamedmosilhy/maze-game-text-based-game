#pragma once
#include "character.h"
#include "room.h"
class player:public character
{
private:
	string player_name;
	int x_prev;
	int y_prev;
	item supply;

public:
	player(int x,int y, int h, int d, int a);
	void set_name(string n);
	string get_name();
	void set_x_prev(int x);
	void set_y_prev(int y);
	int get_x_prev();
	int get_y_prev();
	player();
	void additem();
	void showplayer();
	
	
};

