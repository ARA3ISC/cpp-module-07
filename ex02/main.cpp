#include "Array.hpp"
using namespace std;

int main()
{
	try
	{
		Array<int> arr(5);

		arr[3] = 5;
		std::cout << arr[4];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
