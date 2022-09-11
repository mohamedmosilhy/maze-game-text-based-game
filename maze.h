#pragma once
#include"room.h"
#include"player.h"
class maze:public room
{
private:
	int i = 0, j = 0;
	player p1;
	room r1[4][4];
	int enter_room=-1;
	int check_room=-1;
	int Fight=-1;
	int change_room=-1;
public:
	maze(room r[4][4], player p);
	void gameloop();
	maze();
	int enterRoom();
	int checkTheRoom();
	int fight();
	void retreat();
	void lootitems();
	void changeRoom();
};

