#include <iostream>

void print(const char* message)
{
	std::cout << message << std::endl;
}

void print(int number)
{
	std::cout << number << std::endl;
}

void print(const char* message, int number)
{
	std::cout << message << number << std::endl;
}

int main()
{
	int id = 313167686;
	print("***************");
	print("My Details:");
	print("surename: Rahamim");
	print("First name: Guy");
	print("ID Number: ",  id);
	print("Phone Number: 0548045705");
	print("***************");
	return 0;
}