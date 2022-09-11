#pragma once
#include<iostream>
using namespace std;

class item
{
private:
	int inc_health=0;
	int inc_attack=0;
	int inc_defence=0;
	string item_name="";
	
public:
	item( string w);
	string get_weapon_name();
	void set_weapon_name(string w);
	int increse_health();
	int increse_attack();
	int increse_defence();
	item();
};

