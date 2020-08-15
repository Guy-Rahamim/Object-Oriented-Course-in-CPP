#include<iostream>
class Door
{
public:
	void setColor(char* color)
	{
		int len = strlen(color) + 1;
		color = new char[len];
		
		if (!color)
		{
			std::cout << "Error allocating memory for color in class Door";
			exit(EXIT_FAILURE);
		}
	}

protected:
	int price;
	char* color;

};