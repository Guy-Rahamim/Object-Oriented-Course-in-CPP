#include<iostream>
void print(const char* message)
{
	std::cout << message << std::endl;
}

void print(const char* message, double num)
{
	std::cout << message << num << std::endl;
}

double totalMovingPrice(double kmCount, int floorCount, int boxCount, int heavyItemsCount)
{
	//initialize total price
	double total = 0;

	//calculating individual price components
	double kmPrice = 8.25 *kmCount;
	double floorPrice= 15.95 * floorCount;
	double boxPrice = 2.0 * boxCount;
	double heavyItemsPrice = 20.0*heavyItemsCount;

	//calculating total price.
	total = kmPrice + floorPrice + boxPrice + heavyItemsPrice;

	
	//add tip
	total += total/10;
	std::cout << total << std::endl;
	//return total price.
	return total;
}

int main()
{
	double kmCount = 0.f;
	int floorCount = 0;
	int boxCount = 0;
	int heavyItemsCount = 0;

	print("Welcome to the 'Cloud Movers' price calculator.");
	print("Please enter the following details:");
	print("what is the distance from your current home to your new home?");
	std::cin >> kmCount;
	print("on which floor do you currently live?");
	std::cin >> floorCount;
	print("how many boxes will you pack?");
	std::cin >> boxCount;
	print("and how many heavy items (washing machine, dish dryer, etc..) do you have?");
	std::cin >> heavyItemsCount;

	print("your total moving price is: ", totalMovingPrice(kmCount, floorCount, boxCount, heavyItemsCount));
	return 0;
}