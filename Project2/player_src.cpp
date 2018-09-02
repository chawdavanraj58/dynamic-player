#include"player.h"

player::player()
{
	this->matches = 0;
	this->runs = 0;
	this->wickets = 0;
	this->name= new char[1];
	strcpy(this->name, "\0");
}

void player::accept()
{
	char name[20];
	cout << "number of matches \n ";
	cin >> this->matches;
	cout << "number of runs \n";
	cin >>this->runs;
	cout << "number of wickets \n";
	cin >> this->wickets;
	cout << "Nmae of the Player\n";
	cin >> name;
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
}

void player::display()
{
	cout << this->name << "  ";
	cout << this->matches << "  ";
	cout << this->runs << "  ";
	cout << this->wickets << "  ";
	cout << "\n";

}

//player::~player()
//{
//	delete[] player;
//}