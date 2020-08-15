#include "Animal.h"

Animal::Animal(int age, const char* sound):age(age), sound(NULL)
{
	set_sound(sound);
}

Animal::Animal(const Animal& other)
{
	*this = other;
}

Animal::~Animal()
{
	delete[] this->sound;
}


Animal& Animal::operator=(const Animal& other)
{
	this->age = other.age;
	set_sound(other.sound);
	return *this;
}

void Animal::set_sound(const char* sound)
{
	delete[] this->sound;
	int length = strlen(sound) + 1;
	this->sound = new char[length];
	if (!this->sound)
	{
		std::cout << "memory allocation failed in Animal::set_sound";
		return;
	}
	else
		strcpy_s(this->sound, length, sound);

}

