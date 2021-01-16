#include <iostream>
#include <string>
#include <time.h>
using namespace std;


int main()
{
	// Char array to capture name; locked at 7 characters
	char name[8];
	int answer(0), health(99);
	string food[5];
	
	
	cout << "********************************************************\n"
		 << "It's a Thursday morning and you finally wake up at home.\n"
		 << "I forgot your name. What is it again?.. \n"
		 << "********************************************************\n"
		 << "Enter a name: ";
	cin.getline(name, 8); 

	health -= 29;
	cout << "\n***************************\n"
		 << "Ah, right... Yes. " << name << "!\n"
		 << "\n***************************\n"
		 << "Press enter to continue...";
	cin.ignore();
	system("cls");
	cout << "*********************************************************\n"
		 << "Your health is currently at " << health << " out of 99......\n"
		 << "\n*********************************************************\n"
		 << "Press enter to continue...";
	cin.ignore();
	system("cls");
	cout << "*********************************************************\n"
		 << "You partied pretty hard last night, let's get some breakfast?\n"
		 << "\n*********************************************************\n"
		 << "1) Yes\n2) No\n3) Fuck you \n\n"
		 << "Select your choice: ";
	cin  >> answer;

	while (true)
	{
		switch (answer)
			{
			case 1: 
				cout << endl << name << " goes into the kitchen..\n"
					 << "One by one, type and enter five foods or dishes you would like to eat. \n";

				for (int i = 0; i <= 5; i++)
				{
					if (i != 5)
					{

					int count = i + 1;
					cout << "Food #" << count << ": ";
					cin >> food[i];

					}

				}
				return false; 
				break;
				

			case 2:
				cout << name << "\n decided to stay in their room..\n"
					 << "You turned on your GameCube\n";
				break;

			case 3: 
			{
				int damage(0);
				srand (time(NULL));
				damage = rand() % 20000000 + 10000000;

				cout << "\nYou dare insult the narrator?\n"
					 <<	"Narrator performs Lightning Strike and deals indefinite damage!\n";
				health -= damage;
				if (health <= 0)
				{
					cout << name << "'s health is at " << health << ". " 
						 << name << " has fainted!\n\nGame Over\n";
				} 
				
				answer = 4;
				break;
			}

			case 4:
				cout << "Bye!";
				return false;
				break;

			default: 
				cout << answer << " is not valid.\n" << endl;
		}

	}

	cout << "\n\nDEBUG:You are outside the switch statement.\n\n";
	system("pause");
	return 0; 







}