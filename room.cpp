#include "room.h"

room::room(int x, int y, bool f,int s2)
{
	x_position = x;
	y_position = y;
	flag = f;
	actualSize2 = 0;
	characterlist = new character[s2];
	
}
void room::damageforenemie(int a)
{
	characterlist[a].damage();
}

void room::set_x_position(int x)
{
	x_position = x;
}

void room::set_y_position(int y)
{
	y_position = y;
}
 room::room()
{
	 x_position = 0;
	 y_position = 0;
	 flag = false;
	 actualSize2 = 0;
	 characterlist = NULL;
}

int room::get_x_position()
{
	return x_position;
}

int room::get_y_position()
{
	return y_position;
}

bool room::if_exit()
{
	if (flag == false)
		return false;
	else
		return true;
}

void room::set_flag(bool f)
{
	flag = f;
}

void room::additem1(item c1)
{
	supply = c1;
	thereIsSupply = true;
}

void room::addcharacter(character c1)
{
	characterlist[actualSize2] = c1;
	actualSize2++;
}

void room::set_parameters(int x, int y, bool f, int s2)
{
	x_position = x;
	y_position = y;
	flag = f;
	
	actualSize2 = 0;
	characterlist = new character[s2];
}

bool room::if_item()
{
	return thereIsSupply;
}



int room::get_actualsizeofenemies()
{
	return actualSize2;
}





void room::showCharacters()
{
	cout << endl;
	int a = 1;
	for (int i = 0; i < actualSize2; i++) {
		if (characterlist[a-1].get_health() <= 0) {
			cout << "enemey " << a << " killed" << endl;
			a++;
			continue;
		}
		cout << "enemy number " << a << ":  attack: " << characterlist[i].get_attack() << endl;
		cout << "defence: " << characterlist[i].get_defence() << endl;
		cout << "health: " << characterlist[i].get_health() << endl;
		a++;
	}
}

character room::getOnechar(int i)
{
	return characterlist[i];
}


