#include "DomesticCat.h"

void DomesticCat::scratch()
{
	if (itchiness_level < 5)
		std::cout << "I'm not so itchy!!!" << std::endl;

	else if (itchiness_level <= 8 && itchiness_level > 5)
		std::cout << "I'm so itchy!!!" << std::endl;

	else
		std::cout << "I'm very itchy!!!" << std::endl;
}

DomesticCat::DomesticCat(int age, const char* sound, const char* name, int itchiness_level, int tail_length, int num_of_souls, const char* breed)
	:Cat::Cat(age,sound,tail_length,num_of_souls,breed)
{
	this->itchiness_level = itchiness_level;
	set_name(name);

}

DomesticCat::DomesticCat(const DomesticCat& other)
	:Cat::Cat(other)
{
	*this = other;
}

DomesticCat& DomesticCat::operator=(const DomesticCat& other)
{
	Cat::operator=(other);
	set_name(name);
	this->itchiness_level = other.itchiness_level;
	return *this;
}

DomesticCat::~DomesticCat()
{
	//Cat::~Cat();
	delete[](this->name);
}

void DomesticCat::set_name(const char* name)
{
	delete[](this->name);
	int length = strlen(name) + 1;
	this->name = new char[length];
	if (!this->name)
	{
		std::cout << "memory allocation failed in DomesticCat::set_name." << std::endl;
		return;
	}
	else
		strcpy_s(this->name, length, name);
}

void DomesticCat::print()
{
	std::cout << "Domestic Cat Name: " << name << ", Breed: " << breed <<
		", Age: " << age << ", Souls: " << num_of_souls << ", Tail: " << tail_length << " \" long" << std::endl;
}

void DomesticCat::make_sound()
{
	std::cout <<"I miau you : "<< sound << std::endl;
}

int DomesticCat::calcFood()
{
	return (itchiness_level * 10);
}

