#include "WildCat.h"


WildCat::WildCat(int hunger_level, int age, const char* sound, int tail_length, int num_of_souls, const char* breed)
	:Cat(age,sound,tail_length,num_of_souls,breed)
{
	this->hunger_level = hunger_level;
}

void WildCat::hunt()
{
	if (hunger_level < 5)
		std::cout << "I'm chillin' now talk to you'll later. . . ." << std::endl;

	if (hunger_level > 4)
		std::cout << "I am a natural hunter!" << std::endl;
}

void WildCat::make_sound() 
{
	std::cout << "I'm so wild: " << sound << std::endl;
}

void WildCat::print()
{
	std::cout << "Wild Cat - Breed: " << breed << ", Age: " << age << ", Souls: " << num_of_souls
		<< ", Tail: " << tail_length << " \" long" << std::endl;
}

int WildCat::calcFood()
{
	return (hunger_level * tail_length);
}
