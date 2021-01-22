#include <iostream>
#include <string>
#include <time.h>
#include <array>
#include <random>
#include <limits>

int main()
{
	// Char array to capture name; locked at 7 characters
	std::default_random_engine eng(time(0));
	char name[8];
	int answer = 0, health = 70;

	std::cout << "********************************************************\n"
              << "It's a Thursday morning and you finally wake up at home.\n"
              << "I forgot your name. What is it again?.. \n"
		      << "********************************************************\n"
		      << "Enter a name: ";
	std::cin.getline(name, 8);

	std::cout << "\n***************************\n"
		      << "Ah, right... Yes. " << name << "!\n"
              << "\n***************************\n"
		      << "Press enter to continue...";
    std::cin.ignore();
	system("cls");
	std::cout << "*********************************************************\n"
              << "Your health is currently at " << health << " out of 70......\n"
              << "\n*********************************************************\n"
              << "Press enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << "*********************************************************\n"
              << "You partied pretty hard last night, let's get some breakfast?\n"
		      << "\n*********************************************************\n"
		      << "1) Yes\n2) No\n3) Fuck you \n\n"
		      << "Select your choice: ";

	while (true)
	{
		switch (answer)
        {
            case 0:
                std::cin  >> answer;
                break;
			case 1:
			    {
			        std::array<std::string,5> food;

                    std::cout << std::endl << name << " goes into the kitchen..\n"
                         << "One by one, type and enter five foods or dishes you would like to eat. \n";

                    for (int i = 0; i <= 4; i++)
                    {
                        std::cout << "Food #" << i+1 << ": ";
                        std::cin >> food[i];
                    }
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			    }
			    answer = 0;
				break;
			case 2:
				std::cout << name << "\n decided to stay in their room..\n"
					      << "You turned on your GameCube\n";
				break;
			case 3:
			{

				std::cout << "\nYou dare insult the narrator?\n"
                          <<	"Narrator performs Lightning Strike and deals indefinite damage!\n";
                std::uniform_real_distribution<double> urd(0,20000000);
				int damage = int(urd(eng)) + 10000000;
				health -= damage;
				if (health <= 0)
				{
					std::cout << name << " reached 0!\n"
						      << name << " has fainted!\n\nGame Over\n";
				}

				answer = 4;
				break;
			}

			case 4:
				std::cout << "Bye!";
				return 0;
			default:
				std::cout << answer << " is not valid.\n";
				std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		}
	}
	std::cout << "\n\nDEBUG:You are outside the switch statement.\n\n";
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cin.get();
	return 0;
}
