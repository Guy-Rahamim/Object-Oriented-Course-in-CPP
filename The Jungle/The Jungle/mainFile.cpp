#include"Monkey.cpp";
#define SEPERATE std::cout<<std::endl<<std::endl;
int main()
{
	Monkey drew;

	char abeName[] = "abe2";
	Monkey abe = Monkey(abeName, 53, 100);

	char normanName[] = "norman";
	Monkey norman = Monkey(normanName, -314, 100);

	char dandelionName[] = "dandelion";
	Monkey dandelion = Monkey(dandelionName, 30, 510);

	char euclidName[] = "euclid";
	Monkey* euclid = new Monkey(euclidName,100,100);

	char harveyName[] = "harvey";
	Monkey* harvey = new Monkey(harveyName, 93, 35);

	harvey->setName("JOE");
	euclid->setWeight(55);
	drew.setAge(12);

	SEPERATE

	Monkey monkeyArray[] = { drew, abe, norman, dandelion , *euclid, *harvey};
	int monkeyArrayLength = 6;
	
	//printing the values for each monkey.
	std::cout << "----------------printing monkey details------------------" << std::endl;
	for (int i = 0; i < monkeyArrayLength; i++)
	{	
		std::cout << "Monkey number : " << i<< "\t";
		monkeyArray[i].print(); 
	}
	
	SEPERATE

	//feeding drew 20 times. poor drew.
	std::cout << "-----------------feeding 20 times-----------------" << std::endl;
	
	char foodForDrew[] = "banana";
	for (int i = 0; i < 20; i++)
	{
		monkeyArray[0].eat(foodForDrew);
	}

	std::cout << monkeyArray[0].getName() << "'s weight is now: " << monkeyArray[0].getWeight() << std::endl;

	SEPERATE

	//making abe poop 15 times.
	std::cout << "------------------pooping 15 times--------------" << std::endl;
	for (int i = 0; i < 15; i++)
	{
		monkeyArray[1].poop();
	}
	std::cout << monkeyArray[1].getName() << "'s weight is now: " << monkeyArray[1].getWeight() << std::endl;


	delete euclid;
	delete harvey;
	return 0;
}