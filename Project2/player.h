#include<iostream>
#include<conio.h>
using namespace std;

class player
{
private:
	int matches;
	int runs;
	int wickets;
	char* name;
public:
	player();
	void accept();
	void display();
	//~/*player();*/
};