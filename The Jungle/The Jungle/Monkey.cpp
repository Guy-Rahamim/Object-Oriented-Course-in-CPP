#include<iostream>

class Monkey
{
private:
	//Initializing fields.
	char* name;
	int age;
	int weight;

public :
	
	Monkey() //default constructor
	{
		this->name = NULL;
		char str[] = "noname";
		setName(str);
		weight = 0;
		age = 0;
	}

	 Monkey(const char* newName, int newAge, int newWeight) //parametric constructor
	 {
		 this->name = NULL;
		 setName(newName);
		 setAge(newAge);
		 setWeight(newWeight);
	 }

	 Monkey(const Monkey& monkey)
	 {
		 this->name = NULL;
		 setName(monkey.getName());
		 setAge(monkey.getAge());
		 setWeight(monkey.getWeight());
	 }

	 ~Monkey()
	 {	delete[] (this->name);	 }

	char* getName() const
	{	return name;	}
	
	int getAge() const
	{	return age;		}

	int getWeight() const
	{	return weight;	}

	void setName(const char* newName)
	{
		char defaultName[] = "kofiko";
		int defaultNameLength = strlen(defaultName) + 1;
		//deleting the the value name is pointing to.
		delete (this->name);

		//storing the length of the new name.
		int nameLength = strlen(newName)+1;


		//if there are no digits in the new name, copy it to the name field
		if (checkForDigits(newName))
		{

			name =//dynamically allocating a memory block with the new name's length.
	 new char[nameLength];
			strcpy_s(name, nameLength, newName);
		}

		else
		{
			//dynamically allocating a memory block with the default name's length.
			name = new char[defaultNameLength];			
			std::cout << "ERROR: name" << std::endl;
			strcpy_s(name, defaultNameLength, defaultName);
		}

	}

	bool checkForDigits(const char* newName)
	{
		int length = strlen(newName);
		for (int i = 0; i < length; i++)
		{
			if (*(newName+i)<='9' && *(newName+i)>=0)
				return false;
		}
		return true;
	}

	void setAge(int newAge)
	{
		if (newAge < 0 || newAge>100)
		{
			std::cout << "ERROR:  age of monkey " <<getName() <<std::endl;
			age = 40;
		}
		else
			age = newAge;
	}

	void setWeight(int newWeight)
	{
		if (newWeight < 3 || newWeight>200)
		{
			std::cout << "ERROR: Weight at Monkey " <<this->getName()<<std::endl;
			weight = 100;
		}
		else
			weight = newWeight;
	}

	void print()
	{
		std::cout << "Name: " << getName() << "\tAge: " << getAge() << "\tWeight: " << getWeight() << std::endl;
	}

	void eat(char* food)
	{
		if (getWeight() + 10 > 200)
		{
			std::cout << "Cannot feed " << getName() << " anymore." << std::endl;
			return;
		}
		setWeight(getWeight() + 10);
		std::cout << getName() << " eats " << food << std::endl;
	}

	void poop()
	{
		if (getWeight() - 15 < 3)
		{
			std::cout << getName() << " cannot poop anymore" << std::endl;
			return;
		}
		setWeight(getWeight() - 15);
	}


};
