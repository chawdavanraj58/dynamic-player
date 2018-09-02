//4.	Write  a program to create an array for N players.For each player store name, no.of matches played, runs, wickets takes.
//a.Create function to Accept the information of each player.
//b.Create function to display the information of all the players
//c.Display the information of player who made maximum runs and the one who took maximum number of wickets.




#include"player.h"

void main()
{
	int i,num;
	player *ptr;
	cout <<"\nenter no. of players\n";
	cin >> num;
	ptr = new player[num];
	
    for (i = 0; i < num; i++)
	{
		ptr[i].accept();
		
	}

	for (i = 0; i < num; i++)
	{
		ptr[i].display();

	}

	_getch();
}
