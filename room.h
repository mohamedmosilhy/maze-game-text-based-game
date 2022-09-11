#pragma once
#include "item.h"
#include"character.h"
#include"player.h"
class room:public character
{
private:
	int x_position=0;
	int y_position=0;
	bool flag=false;
	int actualSize2;
	character* characterlist;
	item supply;
	bool thereIsSupply = false;

public:
	room(int x, int y, bool f,int s2);
	room();
	void set_x_position(int x);
	void set_y_position(int y);
	int get_x_position();
	int get_y_position();
	bool if_exit();
	void set_flag(bool f);
	void additem1(item c1);
	void addcharacter(character c1);
	void set_parameters(int x, int y, bool f, int s2);
	bool if_item();
	void damageforenemie(int a);
	int get_actualsizeofenemies();
	void showCharacters();

	character getOnechar(int i);
};
