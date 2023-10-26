#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename U>
void func(U element)
{
	(*element)++;
}

template <typename T>
void iter(T arr, int len, void (*func)(T))
{
	for (int i = 0; i < len; i++)
	{
		func(&arr[i]);
	}
}


#endif
