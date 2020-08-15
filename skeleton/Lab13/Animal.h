#pragma once
#include <iostream>
using namespace std;
class Animal
{
protected:
	int age; //in years
	char* sound;
public:
	Animal(int age, const char* sound);
	Animal(const Animal& other);
	virtual ~Animal();
	virtual void make_sound() = 0;
	Animal& operator=(const Animal& other);
	void set_sound(const char* sound);
	virtual void print() = 0;
};

