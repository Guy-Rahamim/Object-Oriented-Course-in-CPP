#include "Cat.h"
#include "Animal.h"

Cat::Cat(int age, const char* sound, int tail_length, int num_of_souls, const char* breed)
	:Animal::Animal(age,sound),tail_length(tail_length) 
{
	this->num_of_souls = num_of_souls;
	set_breed(breed);
}

Cat::Cat(const Cat& other)
	:Animal::Animal(other),tail_length(other.tail_length)
{
	*this = other;
}

Cat::~Cat()
{
	//Animal::~Animal();
	delete[](this->breed);
}

Cat& Cat::operator=(const Cat& other)
{
	//calling Animal assignment operator
	Animal::operator=(other);

	//changing the value of a const field using pointers.
	int* tailPtr = (int*) &tail_length;
	*tailPtr = other.tail_length;

	this->num_of_souls = other.num_of_souls;
	set_breed(other.breed);
	return *this;
}

void Cat::make_fur_ball()
{
	for (int i = 0; i < this->tail_length; i++)
	{
		std::cout << "fur";
	}
	std::cout << std::endl;
}

void Cat::set_breed(const char* breed)
{
	delete[](this->breed);
	int length = strlen(breed) + 1;
	this->breed = new char[length];
	if (!breed)
	{
		std::cout << "memory allocation failed in Cat::set_breed.";
			return;
	}
	else
		strcpy_s(this->breed, length, breed);
}
