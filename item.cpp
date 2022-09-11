#include "item.h"

item::item( string w="")
{

	set_weapon_name(w);

}

void item::set_weapon_name(string w)
{
	item_name = w;
}

string item::get_weapon_name()
{
	return item_name;
}

int item::increse_health()
{
	
	inc_health += 50;
	return inc_health;
}

int item::increse_attack()
{
	
	inc_attack += 50;
	return inc_attack;
}

int item::increse_defence()
{
	
	inc_defence += 50;
	return inc_defence;
}

item::item()
{
}
