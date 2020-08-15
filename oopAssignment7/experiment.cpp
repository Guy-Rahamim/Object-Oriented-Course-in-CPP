#include<iostream>
int main()
{
	const char* months[] = { "January","February","March","April","May","June","July","August","September"
						,"October","November","December"};
	std::cout << "sizeof: " <<sizeof(months) << std::endl;
	std::cout << "size: " << std::size(months) << std::endl << std::endl;
		for (int i = 0; i < sizeof(months); i++)
		{
			std::cout <<"month: " << months[i] <<",   i: "<< i << std::endl;
		}
	return 1;
}