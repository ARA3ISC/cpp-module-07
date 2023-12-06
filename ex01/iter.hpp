#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename U>
void func(U &element)
{
	std::cout << element << std::endl;
}

template <typename T, typename U>
void iter(T arr, int len, void (*func)(U))
{
	for (int i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}


#endif
