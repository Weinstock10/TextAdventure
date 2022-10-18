#include <iostream>
#include <cstdlib>
#include <unistd.h>


int main() {
	srand(time(NULL));
	int louie = (rand() % 4) + 1;
	//std::cout << louie;
	int found = 0;
	
	int dir;
	std::string choice1 = "";
	std::string choice2 = "";
	
	std::cout << "\n\n";
	std::cout << "Sharron is gonna kill me if I dont\nget louie.\n\n";
	std::cout << "Gotta get there quick, which way?\n\n";
	
	std::cout << "North\n";
	std::cout << "East\n";
	std::cout << "South\n";
	std::cout << "West\n\n";
	
	std::cout << "Choose: \n";
	
	std::cin >> choice1;
	
	while (choice1 != "North" || choice1 != "South" || choice1 != "East" || choice1 != "West") {
		if (choice1 == "North" || choice1 == "South" || choice1 == "East" || choice1 == "West") {
			break;
		}
		std::cout << "Not an answer, try again\n";
		std::cin >> choice1;
	}
	
	if (choice1 == "North") {
		dir = 1;
	}
	else if (choice1 == "East") {
		dir = 2;
	}
	else if (choice1 == "South") {
		dir = 3;
	}
	else {
		dir = 4;
	}

	std::cout << "\n";
	
	while(found != 1) {
		switch(dir) {
			//north 1 (Ice Castle)
			case 1 :
			dir = 0;
			std::cout << "I made it to the Ice Castle. It's pretty\n";
			std::cout << "cold which louie hates! Doubt he's here\n\n";
			
			std::cout << "Should I try the Castle, go East, go West, or\n";
			std::cout << "head back to home (HBH) where Sharron will be awfully\n";
			std::cout << "cross with me!\n";
			
			std::cout << "Enter Direction: ";
			std::cin >> choice2;
			std::cout << "\n";
			
			while (choice2 != "Castle" || choice2 != "East" || choice2 != "West" || choice2 != "HBH") {
				if (choice2 == "Castle" || choice2 == "East" || choice2 == "West" || choice2 == "HBH") {
					if (choice2 == "Castle") {
						dir = 1;
						if (louie == 1) {
							found = 1;
							std::cout << "We found him! Sharron is going to be so happy\n";
							std::cout << "Thank you so much for all your help. Sorry if\n";
							std::cout << "I got a little upset but glad you were here to help!\n\n";
						}
						else {
							std::cout << "He's not here! I'm low on time. Hurry up!\n";
							std::cout << "The ice was obviously too cold for him but\n";
							std::cout << "he does like snow so it wasn't completly out there.\n\n";
							sleep(2);
						}
					}
					else if (choice2 == "East") {
						dir = 2;
					}
					else if (choice2 == "HBH") {
						break;
					}
					else {
						dir = 4;
					}
				break;
				}
				std::cout << "Not an answer, try again\n";
				std::cin >> choice2;
			}
			
			break;
			
			//east 1 (Ocean View)
			case 2 :
			dir = 0;
			std::cout << "I made it to the Ocean View. I wonder if\n";
			std::cout << "louie is around...gonna have to start looking\n\n";
			
			std::cout << "Should I jump from the wall and check the Ocean, \n";
			std::cout << "head North where it looks to be getting cold, head\n";
			std::cout << "South, or head back home (HBH) where Sharron is\n";
			std::cout << "bound to be getting home soon! I better hurry!\n\n";
			
			std::cout << "Enter Direction: ";
			std::cin >> choice2;
			std::cout << "\n";
			
			while (choice2 != "North" || choice2 != "Ocean" || choice2 != "South" || choice2 != "HBH") {
				if (choice2 == "North" || choice2 == "Ocean" || choice2 == "South" || choice2 == "HBH") {
					if (choice2 == "North") {
						dir = 1;
					}
					else if (choice2 == "Ocean") {
						dir = 2;
						if (louie == 2) {
							found = 1;
							std::cout << "We found him! Sharron is going to be so happy\n";
							std::cout << "Thank you so much for all your help. Sorry if\n";
							std::cout << "I got a little upset but glad you were here to help!\n\n";
						}
						else {
							std::cout << "Why would he be in the Ocean!\n";
							std::cout << "I should have never trusted you\n";
							std::cout << "to help me! I'm running out of time!\n\n";
							sleep(2);
						}
					}
					else if (choice2 == "South") {
						dir = 3;
					}
					else {
						break;
					}
				break;
				}
				std::cout << "Not an answer, try again\n";
				std::cin >> choice2;
			}
			
			break;
			
			//south 1 (Swamp)
			case 3 :
			dir = 0;
			std::cout << "I made it to the Swamp. If I know louie\n";
			std::cout << "I know he can't take the heat...or the snakes\n\n";
			
			std::cout << "Should I try the Swamp and see, head West and\n";
			std::cout << "start climbing, head East, or head back home\n";
			std::cout << "(HBH) where Sharron will be will the same look\n";
			std::cout << "as always...maybe I should swim with the snakes.\n\n";
			
			std::cout << "Enter Direction: ";
			std::cin >> choice2;
			std::cout << "\n";
			
			while (choice2 != "HBH" || choice2 != "West" || choice2 != "Swamp" || choice2 != "East") {
				if (choice2 == "HBH" || choice2 == "West" || choice2 == "Swamp" || choice2 == "East") {
					if (choice2 == "HBH") {
						break;
					}
					else if (choice2 == "East") {
						dir = 2;
					}
					else if (choice2 == "Swamp") {
						dir = 3;
						if (louie == 3) {
							found = 1;
							std::cout << "We found him! Sharron is going to be so happy\n";
							std::cout << "Thank you so much for all your help. Sorry if\n";
							std::cout << "I got a little upset but glad you were here to help!\n\n";
						}
						else {
							std::cout << "Louie hates the swamp...but I\n";
							std::cout << "can't blame you for my bad decisions.\n";
							std::cout << "We'll have to try someone else fast\n";
							std::cout << "before daylight is gone.\n\n";
							sleep(2);
						}
					}
					else {
						dir = 4;
					}
				break;
				}
				std::cout << "Not an answer, try again\n";
				std::cin >> choice2;
			}
			
			break;
			
			//west 1 (Mountain)
			case 4 :
			dir = 0;
			std::cout << "Hard to breathe up this high. I don't think\n";
			std::cout << "louie could climb up here even if he wanted\n";
			
			std::cout << "Should I try the Top of the Mountain, head North and\n";
			std::cout << "check the cold, head South where at least we\n";
			std::cout << "aren't so high up, or head back home (HBH) where\n";
			std::cout << "I bet Sharron will be ready for dinner soon!\n\n";
			
			std::cout << "Enter Direction: ";
			std::cin >> choice2;
			std::cout << "\n";
			
			while (choice2 != "North" || choice2 != "HBH" || choice2 != "South" || choice2 != "Top") {
				if (choice2 == "North" || choice2 == "HBH" || choice2 == "South" || choice2 == "Top") {
					if (choice2 == "North") {
						dir = 1;
					}
					else if (choice2 == "HBH") {
						break;
					}
					else if (choice2 == "South") {
						dir = 3;
					}
					else {
						dir = 4;
						if (louie == 4) {
							found = 1;
							std::cout << "We found him! Sharron is going to be so happy\n";
							std::cout << "Thank you so much for all your help. Sorry if\n";
							std::cout << "I got a little upset but glad you were here to help!\n\n";
						}
						else {
							std::cout << "I don't think Louie can climb this\n";
							std::cout << "high...but the view was worth it.\n";
							std::cout << "Sometime I'll take Sharron and Louie\n";
							std::cout << "to see this. Better climb down for now.\n\n";
							sleep(2);
						}
					}
				break;
				}
				std::cout << "Not an answer, try again\n";
				std::cin >> choice2;
			}
			
			break;
			default :
			dir = 0;
			std::cout << "Back home without Louie! Oh No!\n";
			std::cout << "Gotta find him quick, which way?\n\n";
	
			std::cout << "North\n";
			std::cout << "East\n";
			std::cout << "South\n";
			std::cout << "West\n\n";
			
			std::cout << "Choose: \n";
			
			std::cin >> choice2;
			while (choice2 != "North" || choice2 != "East" || choice2 != "South" || choice2 != "West") {
				if (choice2 == "North" || choice2 == "East" || choice2 == "South" || choice2 == "West") {
					if (choice2 == "North") {
						dir = 1;
					}
					else if (choice2 == "East") {
						dir = 2;
					}
					else if (choice2 == "South") {
						dir = 3;
					}
					else {
						dir = 4;
					}
				break;
				}
				std::cout << "Not an answer, try again\n";
				std::cin >> choice2;
			}
			break;
		}
	
	}
	

	
}
