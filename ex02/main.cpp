#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	try
	{
		/* code */
		Array<int> numbers;
		numbers[0] = 3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


    return 0;
}
