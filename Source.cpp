#include<iostream>
#include "character.h"
#include "room.h"
#include "item.h"
#include "player.h"
#include"maze.h"
using namespace std;
int main() {

	srand((unsigned)time(0));
	int randomNumber_x;
	int randomNumber_y;
	randomNumber_x = (rand() % 4);
	randomNumber_y = (rand() % 4);
	while (randomNumber_x == 0 && randomNumber_y == 0)
	{
		randomNumber_x = (rand() % 4);
		randomNumber_y = (rand() % 4);
	}

	item supply("supply");
	character en1(30, 30, 25);
	character en2(50, 50, 25);
	character en3(100, 100, 25);
	room r1[4][4];
	player p1;

	r1[0][0].set_parameters(0, 0, false, 0);
	r1[0][1].set_parameters(0, 1, false, 0);
	r1[0][1].additem1(supply);
	r1[1][0].set_parameters(1, 0, false, 2);
	r1[1][0].addcharacter(en1);
	r1[1][0].addcharacter(en3);
	r1[1][1].set_parameters(1, 1, false, 2);
	r1[1][1].additem1(supply);
	r1[1][1].addcharacter(en2);
	r1[0][2].set_parameters(0, 0, false, 0);
	r1[0][3].set_parameters(0, 1, false, 0);
	r1[0][3].additem1(supply);
	r1[1][2].set_parameters(1, 0, false, 2);
	r1[1][2].addcharacter(en1);
	r1[1][2].addcharacter(en3);
	r1[1][3].set_parameters(1, 1, false, 2);
	r1[1][3].additem1(supply);
	r1[1][3].addcharacter(en2);
	r1[2][0].set_parameters(0, 0, false, 0);
	r1[2][1].set_parameters(0, 1, false, 0);
	r1[2][1].additem1(supply);
	r1[3][0].set_parameters(1, 0, false, 2);
	r1[3][0].addcharacter(en1);
	r1[3][0].addcharacter(en3);
	r1[3][1].set_parameters(1, 1, false, 2);
	r1[3][1].additem1(supply);
	r1[3][1].addcharacter(en2);
	r1[2][2].set_parameters(0, 0, false, 0);
	r1[2][3].set_parameters(0, 1, false, 0);
	r1[2][3].additem1(supply);
	r1[3][2].set_parameters(1, 0, false, 2);
	r1[3][2].addcharacter(en1);
	r1[3][2].addcharacter(en3);
	r1[3][3].set_parameters(1, 1, false, 2);
	r1[3][3].additem1(supply);
	r1[3][3].addcharacter(en2);


	r1[randomNumber_x][randomNumber_y].set_flag(true);
	maze m(r1, p1);
	m.gameloop();

	return 0;
}


/*srand((unsigned)time(0));
int randomNumber_x;
int randomNumber_y;
randomNumber_x = (rand() % 4);
randomNumber_y = (rand() % 4);
while (randomNumber_x == 0 && randomNumber_y == 0)
{
	randomNumber_x = (rand() % 4);
	randomNumber_y = (rand() % 4);
}

item supply("supply");
character en1(30, 30, 25);
character en2(50, 50, 25);
character en3(100, 100, 25);
room r1[4][4];
player p1;

r1[0][0].set_parameters(0, 0, false, 0);
r1[0][1].set_parameters(0, 1, false, 0);
r1[0][1].additem1(supply);
r1[1][0].set_parameters(1, 0, false, 2);
r1[1][0].addcharacter(en1);
r1[1][0].addcharacter(en3);
r1[1][1].set_parameters(1, 1, false, 2);
r1[1][1].additem1(supply);
r1[1][1].addcharacter(en2);
r1[0][2].set_parameters(0, 0, false, 0);
r1[0][3].set_parameters(0, 1, false, 0);
r1[0][3].additem1(supply);
r1[1][2].set_parameters(1, 0, false, 2);
r1[1][2].addcharacter(en1);
r1[1][2].addcharacter(en3);
r1[1][3].set_parameters(1, 1, false, 2);
r1[1][3].additem1(supply);
r1[1][3].addcharacter(en2);
r1[2][0].set_parameters(0, 0, false, 0);
r1[2][1].set_parameters(0, 1, false, 0);
r1[2][1].additem1(supply);
r1[3][0].set_parameters(1, 0, false, 2);
r1[3][0].addcharacter(en1);
r1[3][0].addcharacter(en3);
r1[3][1].set_parameters(1, 1, false, 2);
r1[3][1].additem1(supply);
r1[3][1].addcharacter(en2);
r1[2][2].set_parameters(0, 0, false, 0);
r1[2][3].set_parameters(0, 1, false, 0);
r1[2][3].additem1(supply);
r1[3][2].set_parameters(1, 0, false, 2);
r1[3][2].addcharacter(en1);
r1[3][2].addcharacter(en3);
r1[3][3].set_parameters(1, 1, false, 2);
r1[3][3].additem1(supply);
r1[3][3].addcharacter(en2);


r1[randomNumber_x][randomNumber_y].set_flag(true);
maze m(r1, p1);
m.gameloop();*/




//Setters must handle the validation checks of any input of a data member of its class
//If you need to add encoded values in the main function and pass it to the manager class, better add the encoded values inside the class instead.
//	system("CLS");
//Wish you good luck <3












/*srand((unsigned)time(0));
	int randomNumber_x;
	int randomNumber_y;
	randomNumber_x = (rand() % 2);
	randomNumber_y = (rand() % 2);
	while (randomNumber_x == 0 && randomNumber_y == 0)
	{

		randomNumber_x = (rand() % 2);
		randomNumber_y = (rand() % 2);

	}

	item supply("supply");
	character en1(30,30,25);
	character en2(50,50,25);
	character en3(100,100,25);
	room r1[2][2];
	player p1;

	r1[0][0].set_parameters(0, 0, false,  0);
	r1[0][1].set_parameters(0, 1, false,  0);
	r1[0][1].additem1(supply);
	r1[1][0].set_parameters(1, 0, false,  2);
	r1[1][0].addcharacter(en1);
	r1[1][0].addcharacter(en3);
	r1[1][1].set_parameters(1, 1, false,  2);
	r1[1][1].additem1(supply);
	r1[1][1].addcharacter(en2);


	r1[randomNumber_x][randomNumber_y].set_flag(true);
	maze m(r1,p1);
	m.gameloop();*/
