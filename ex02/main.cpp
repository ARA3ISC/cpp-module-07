#include "Array.hpp"
using namespace std;

int main()
{
	try
	{
		Array<int> arr(5);

		arr[0] = 5;
		arr[1] = 43;
		arr[2] = 14;
		arr[3] = -1;
		arr[4] = 99;

		for (int i = 0; i < 6; i++)
		{
			std::cout << arr[i] << " | ";
		}
		std::cout << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
