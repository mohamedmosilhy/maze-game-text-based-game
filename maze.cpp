#include "maze.h"
#include<iostream>
using namespace std;
maze::maze()
{

	int enter_room = -1;
	int check_room = -1;
	int Fight = -1;
	int change_room = -1;

}


int maze::enterRoom()
{
	checkTheRoom();
	if (check_room==0) {
		return enter_room = 0;
	}
	if (check_room ==1) {
		return enter_room = 1;
	}
	if (check_room == 2) {
		return enter_room = 2;
	}
	if (check_room == 3) {
		return enter_room = 3;
	}
	return enter_room = 1;
}


int maze::checkTheRoom()
{
	if (r1[i][j].get_actualsizeofenemies() == 0 && r1[i][j].if_item() == false) {
		cout << "the room is empty." << endl;
		return check_room=1;
	}
	if (r1[i][j].get_actualsizeofenemies() > 0 && r1[i][j].if_item() == true) {
		cout << "  in the room:there are supplies." << endl;
		cout << "in the room: there are--> enemies:" << r1[i][j].get_actualsizeofenemies()<<endl;
		r1[i][j].showCharacters();
		p1.showplayer();
		return check_room=3;
	}
	int x1=0;

	if (r1[i][j].if_item())
	{
		cout << "in the room:there are supplies." << endl;
		x1 = 0;
	}
	
	if (r1[i][j].get_actualsizeofenemies() > 0) {
		cout << "in the room: there are--> enemies:"<< r1[i][j].get_actualsizeofenemies()<<endl;
		r1[i][j].showCharacters();
		p1.showplayer();
		x1 = 2;
	}
	
	return check_room=x1;
}

int maze::fight()
{
	for (int a = 0; a < r1[i][j].get_actualsizeofenemies(); a++) {
		cout << "ok,now we will fight with enemy number " << a+1<<endl;
			r1[i][j].damageforenemie(a);

			if (r1[i][j].getOnechar(a).get_health() > 0)
			{
				p1.damageforplayer();
			}
		if (p1.ifdead()) {
			cout << "you are killed." << endl;
			return Fight=1;
		}
		r1[i][j].showCharacters();

		p1.showplayer();
		cout << "press 1 to countinue  or  press 2 to retreat" << endl;
		int x2;
		cin >> x2;
		while ( x2 < 1 ||x2 > 2) {
			cin >> x2;
		}
		if (x2 == 2) {
			return Fight = 2;
		}
	}
	return Fight = 0;
}

void maze::retreat()
{
	i=p1.get_x_prev();
	j=p1.get_y_prev();
	
}

void maze::lootitems()
{
	p1.additem();
}

void maze::changeRoom()
{
	int x;
	p1.set_x_prev(i);
	p1.set_y_prev(j);
	if ((i == 1 || i == 2) && (j == 1 || j == 2)) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i-1 << "," << j  << ") 	" << " 2:" << "(" << i + 1 << "," << j << ")";
		cout << " 3:" << "(" << i  << "," << j+1 << ")" << " 4:" << "(" << i  << "," << j-1 << ")" << endl;
		cin >> x;
		if (x == 1) {
			i = i-1;
			j = j;
			

		}
		if (x == 2) {
			i = i+1;
			j = j ;
			

		}
		if (x == 3) {
			i = i;
			j = j+1 ;
			
		}
		if (x == 4) {
			i = i;
			j = j - 1;
		
		}
		return;
	}
	if ( i == 0 && j == 0) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i  << "," << j+1 << ") 	" << " 2:" << "(" << i+1  << "," << j << ")"<<endl;
		cin >> x;
		if (x == 1) {
			i = i;
			j = j + 1;

		}
		if (x == 2) {
			i = i+1;
			j = j;

		}
		return;
	}
	if (i == 0 && j == 3) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i+1 << "," << j  << ") 	" << " 2:" << "(" << i  << "," << j-1 << ")" << endl;
		cin >> x;
		if (x == 1) {
			i = i+1;
			j = j ;

		}
		if (x == 2) {
			i = i;
			j = j - 1;

		}
		return;
	}
	if (i == 3 && j == 0) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i-1 << "," << j  << ") 	" << " 2:" << "(" << i  << "," << j+1 << ")" << endl;
		cin >> x;
		if (x == 1) {
			i = i-1;
			j = j ;

		}
		if (x == 2) {
			i = i;
			j = j + 1;

		}
		return;
	}
	if (i == 3 && j == 3) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i-1 << "," << j  << ") 	" << " 2:" << "(" << i  << "," << j-1 << ")" << endl;
		cin >> x;
		if (x == 1) {
			i = i-1;
			j = j ;

		}
		if (x == 2) {
			i = i;
			j = j - 1;

		}
		return;
	}
	if ((i == 0 && j == 1) || (i == 0 && j == 2)) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i << "," << j + 1 << ") 	" << " 2:" << "(" << i  << "," << j-1 << ")" << endl;
		cout << " 3:" << "(" << i+1 << "," << j  << ")" << endl;
		cin >> x;
		if (x == 1) {
			i = i;
			j = j + 1;

		}
		if (x == 2) {
			i = i;
			j = j - 1;

		}
		if (x == 3) {
			i = i+1;
			j = j ;

		}
		return;
	}
	if ((i == 3 && j == 1) || (i == 3 && j == 2)) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i-1 << "," << j  << ") 	" << " 2:" << "(" << i  << "," << j+1 << ")" << endl;
		cout << " 3:" << "(" << i << "," << j-1 << ")" << endl;
		cin >> x;
		if (x == 1) {
			i = i-1;
			j = j ;

		}
		if (x == 2) {
			i = i;
			j = j + 1;

		}
		if (x == 3) {
			i = i;
			j = j - 1;

		}
		return;
	}
	if ((i == 2 && j== 3) || ( i== 1 && j == 3)) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i-1 << "," << j  << ") 	" << " 2:" << "(" << i + 1 << "," << j << ")" << endl;
		cout << " 3:" << "(" << i << "," << j - 1 << ")" << endl;
		cin >> x;
		if (x == 1) {
			i = i - 1;
			j = j;

		}
		if (x == 2) {
			i = i+1;
			j = j ;

		}
		if (x == 3) {
			i = i;
			j = j - 1;

		}
		return;
	}
	if ((i == 2 && j == 0) || (i == 1 && j == 0)) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i << "," << j + 1 << ") 	" << " 2:" << "(" << i - 1 << "," << j << ")" << endl;
		cout << " 3:" << "(" << i+1 << "," << j  << ")" << endl;
		cin >> x;
		if (x == 1) {
			i = i ;
			j = j+1;

		}
		if (x == 2) {
			i = i-1;
			j = j ;

		}
		if (x == 3) {
			i = i+1;
			j = j ;

		}
		return;
	}
	
	
	

	/*if (i == 1 && j == 1) {
		if (i != 0 || j != 1) {
			cout << "the rooms you can go to are :     " << " 1:" << "(" << i << "," << j - 1 << ") 	";
		}
		if (i != 1 || j != 0) {
			cout << " 2:" << "(" << i - 1 << "," << j << ")" << endl;
		}
		int x3;
		cin >> x3;
		p1.set_x_prev(i);
		p1.set_y_prev(j);
		if (x3 == 1) {
			i = i;
			j = j - 1;
			
		}
		else {
			i = i - 1;
			j = j;
			
		}
	}
	if (i!=0||j!=1) {
		cout << "the rooms you can go to are :     " << " 1:" << "(" << i << "," << j + 1 << ") 	";
	}
	if (i!=1||j!=0) {
	cout<< " 2:" << "(" << i + 1 << "," << j << ")" << endl;
}        
	int x3;
	cin >> x3;
	p1.set_x_prev(i);
	p1.set_y_prev(j);
	if (x3 == 1) {
		i = i;
		j = j + 1;
		
	}
	else {
		i = i+1;
		j = j;
		
	}*/
}

maze::maze(room r[4][4],player p)
{
	p1 = p;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			r1[i][j] = r[i][j];
		}
	}
	/*p1 = p;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			r1[i][j] = r[i][j];
		}
	}*/
}


void maze::gameloop() {

	cout << "welcome to our maze game. please tell us your name--->";
	string player_name;
	cin >> player_name;
	p1.set_name(player_name);
	p1.set_x_prev(0);
	p1.set_y_prev(0);
	p1.set_health(100);
	p1.set_attack(50);
	p1.set_defence(50);
	cout << "ok  " << p1.get_name() << "." << endl;
	cout << "let's start our journey " << p1.get_name() << endl;
	cout << "welcome to our maze that consists of rooms, each room can contain enemies to fight," << endl;
	cout << "items to collect or it can be an empty room.The goal of the player is to move in x and y direction" << endl;
	cout << "from the start point(Room 1) to the exit, in order to win the game, and surely he" << endl;
	cout <<	"must fight all the enemies that appears on his way and not be killed by them.you are now in the first room " << endl;
	
	while (true) {
		cout << "room ......location  " << "(" << i << "," << j << ")   " << endl;
		enterRoom();
		if (enter_room == 0) {
			if (r1[i][j].get_actualsizeofenemies() == 0 && r1[i][j].if_item())
			{
				cout << "what do you want to do? 1:loot items  2:search for exit " << endl;
				int w;
				cin >> w;
				while (w > 2 || w < 1) {
					cin >> w;
				}
				if (w == 1) {
					lootitems();
					p1.showplayer();
					cout << "what do you want to do?   2:search for exit " << endl;
					cin >> w;
				}
				
				if (w == 2) {
					if (r1[i][j].if_exit()) {
						cout << " good news! the exit tunnel is in the room ." << endl;
						break;
					}
					else
					{
						cout << "sorry, the exit tunnel is not in the room keep going." << endl;
						cout << "which room you want to move to?" << endl;
						changeRoom();
						continue;
					}
				}
			}
		}
		if (enter_room == 1) {
			cout << "You can now look for the exit in the room.   please write 1 " << endl;
			int x;
			cin >> x;
			while (x != 1) {
				cin >> x;
			}
			if (x == 1) {
				if (r1[i][j].if_exit()) {
					cout << " good news! the exit tunnel is in the room ." << endl;
					break;
				}
				else
				{
					cout << "sorry, the exit tunnel is not in the room keep going." << endl;
					cout << "which room you want to move to?" << endl;
					changeRoom();
					continue;
				}
			}
		}

		if (enter_room == 2) {

			if (r1[i][j].get_actualsizeofenemies() > 0 && r1[i][j].if_item() == false) {

				cout << "what do you want to do?      1:fight  2:retreat   " << endl;
				int x;
				cin >> x;
				while (x > 2 || x < 1) {
					cin >> x;
				}
				if (x == 1) {
					fight();
					if (Fight == 1) {
						if (p1.ifdead()) {
							cout << "game over!!" << endl;
							break;
						}
					}
					if (Fight == 0) {
						cout << "wow, you killed all the enemies!!" << endl;
						cout << "You can now look for the exit in the room.   please write 1 " << endl;
						int x;
						cin >> x;
						while (x != 1) {
							cin >> x;
						}
						if (x == 1) {
							if (r1[i][j].if_exit()) {
								cout << " good news! the exit tunnel is in the room ." << endl;
								break;
							}
							else
							{
								cout << "sorry, the exit tunnel is not in the room keep going." << endl;
								cout << "which room you want to move to?" << endl;
								changeRoom();
								continue;
							}
						}
					}
					if (Fight == 2) {
						retreat();
					}
				}
				if (x == 2) {
					retreat();
				}
				
			}
		}

		if (enter_room == 3) {
			if (r1[i][j].get_actualsizeofenemies() > 0 && r1[i][j].if_item()) {
				cout << "1:fight  2:retreat  3:loot items " << endl;
				int x;
				cin >> x;
				while (x > 3 || x < 1) {
					cin >> x;
				}
				if (x == 2) {
					retreat();
				}
				
				if (x == 1) {
					fight();
					if (Fight == 1) {
						if (p1.ifdead()) {
							cout << "game over!!" << endl;
							break;
						}
					}
					if (Fight == 0) {
						cout << "wow, you killed all the enemies!!" << endl;
						cout << "You can now look for the exit in the room.   please write 1 " << endl;
						int x;
						cin >> x;
						while (x != 1) {
							cin >> x;
						}
						if (x == 1) {
							if (r1[i][j].if_exit()) {
								cout << " good news! the exit tunnel is in the room ." << endl;
								break;
							}
							else
							{
								cout << "sorry, the exit tunnel is not in the room keep going." << endl;
								cout << "which room you want to move to? press 1 to move or any thing else to continue" << endl;
								int e;
								cin >> e;
								if (e == 1) {
								changeRoom();
								continue;
							}
								cout << "if you want to loot items press 1 and if you want to retreat press 2" << endl;
								int x;
								cin >> x;
								if (x == 1) {
									lootitems();
									p1.showplayer();
									cout << "if you want to retreat press 2 or to continue press anything else" << endl;
									int x1;
									cin >> x1;
									if (x1 == 2) {
										retreat();
									}
									else {
									changeRoom();
									continue;
								}
								}
								if (x == 2) {
									retreat();
									}
							}
						}
						
					}
					if (Fight == 2) {
						retreat();
					}
				}
				
				if (x == 3) {
					lootitems();
					p1.showplayer();
					cout << "1:fight  2:retreat   " << endl;
					int x;
					cin >> x;
					if (x == 2) {
						retreat();
					}
					if (x == 1) {
						fight();
						if (Fight == 1) {
							if (p1.ifdead()) {
								cout << "game over!!" << endl;
								break;
							}
						}
						if (Fight == 0) {
							cout << "wow, you killed all the enemies!!" << endl;
							cout << "which room you want to move to? press 1 to move or any thing else to continue" << endl;
							int e;
							cin >> e;
							if (e == 1) {
							changeRoom();
							continue;
						}
							cout << "You can now look for the exit in the room.   please write 1 " << endl;
							int x;
							cin >> x;
							while (x != 1) {
								cin >> x;
							}
							if (x == 1) {
								if (r1[i][j].if_exit()) {
									cout << " good news! the exit tunnel is in the room ." << endl;
									break;
								}
								else
								{
									cout << "sorry, the exit tunnel is not in the room keep going." << endl;
									cout << "  2:retreat    press any thing else to continue:   " << endl;
									int x;
									cin >> x;
									if (x == 2) {
										retreat();
									}
									cout << "which room you want to move to? press 1 to move " << endl;
									int e;
									cin >> e;
									if (e == 1) {
										changeRoom();
										continue;
									}
								}

							}
						}
						if (Fight == 2) {
							retreat();
						}

					}
				}
					
					
				}
		}
		
	}
}


