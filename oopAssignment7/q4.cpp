//
//
//#include <iostream>
//#include "string.h"
//void print(std::string message)
//{
//	std::cout << message << std::endl;
//}
//void the_power(float* a, float* b)
//{
//
//	float temp = *a;
//	*a=pow(*a, *b);
//	*b = pow(*b, temp);
//
//	int arr[5] = { 1,2,3,4,5 };
//	int x;
//	std::cout << x << std::endl;
//}
//
//
//void set_char(char* c1, char* c2)
//{
//	if (*c1<'a')
//		*c1 += 32;
//	
//
//	if(*c2>'Z')
//		*c2 -= 32;
//}
//
//void series(double* a, double* b, double* c)
//{
//	*b += *a + *c;
//	*a = (*c - *a) / 2;
//	*c += *a;
//}
//
//double series_next(double* a, double* b, double c)
//{
//	*b += *a + c;
//	*a = (c - *a) / 2;
//	c += *a;
//	return c;
//}
//
//int main()
//{
//	int choice = 0;
//	do
//	{
//		print("Please choose an option of the following : ");
//		print("4. the_power");
//		print("5.set_char");
//		print("6.series");
//		print("7.next_series");
//		std::cin >> choice;
//	} while (choice < 4 || choice > 7);
//
//	switch (choice)
//	{
//	case 4:
//	{
//		float num1, num2;
//		print("please enter 2 successive numbers:");
//		std::cin >> num1;
//		std::cin >> num2;
//		std::cout << " your numbers are: " << num1<< ", " << num2 << std::endl;
//		the_power(&num1, &num2);
//		std::cout << "after using the_power: " << num1 << "," << num2 << std::endl;
//		break;
//	}
//	case 5:
//	{
//		char c1, c2;
//		print("Please enter 2 successive characters:");
//		std::cin >> c1;
//		std::cin >> c2;
//		std::cout << "your characters are: " << c1 << ", " << c2 << std::endl;
//		set_char(&c1, &c2);
//		std::cout << "after calling set_char: " << c1 << "," << c2<<std::endl;
//		break;
//	}
//	case 6:
//	{
//		double num1, num2, num3;
//		print("Please enter 3 successive numbers of a series:");
//		std::cin >> num1;
//		std::cin >> num2;
//		std::cin >> num3;
//		std::cout << "your numbers are: " << num1 << ", " << num2 << ", " << num3 << std::endl;
//		series(&num1, &num2, &num3);
//		std::cout << "after calling 'series': " << num1 << ", " << num2 << "," << num3<<std::endl;
//		break;
//	}
//
//	case 7:
//	{
//		double num1, num2, num3;
//		print("Please enter 3 successive numbers of a series: ");
//		std::cin >> num1;
//		std::cin >> num2;
//		std::cin >> num3;
//		std::cout << "your numbers are: " << num1 << ", " << num2 << ", " << num3 << std::endl;
//		num3 = series_next(&num1, &num2, num3);
//		std::cout << "after calling series_next: " << num1 << ", " << num2 << ", " << num3<<std::endl;
//		break;
//	}
//	
//	default:
//		break;
//
//	}
//	
//
//	
//}
//
