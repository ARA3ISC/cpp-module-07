#include "Array.hpp"
using namespace std;

int main()
{
	try
	{
		// ? int array test
		Array<int> arr(5);

		arr[0] = 5;
		arr[1] = 43;
		arr[2] = 14;
		arr[3] = -1;
		arr[4] = 99;

		// ? creating new array
		Array<int> newarr(5);
		newarr = arr; // assign old array content to the new one

		arr[0] = 500;
		std::cout << "first arr\n";
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr[i] << " | ";
		}
		std::cout << std::endl;
		std::cout << "second arr\n";
		for (int i = 0; i < 5; i++)
		{
			std::cout << newarr[i] << " | ";
		}

		// ? string test
		// Array<std::string> arr(3);

		// arr[0] = "arabi";
		// arr[1] = "aneddame";
		// arr[2] = "14";


		// // std::cout << "first arr\n";
		// for (int i = 0; i < 3; i++)
		// {
		// 	std::cout << arr[i] << " | ";
		// }
		// // std::cout << "len : " << arr.size() << std::endl;


		// std::cout << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
