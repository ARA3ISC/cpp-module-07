#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>


template <typename T>
class Array
{
	private:
		T *myArr;
		unsigned int _len;
	public:
		Array()
		{
			this->_len = 0;
			this->myArr = new T[];
		}
		Array(unsigned int n)
		{
			this->_len = n;
			this->myArr = new T[n];
		}
		Array(const Array& rhs)
		{
			this->myArr = new Array[rhs._len];
			for (int i = 0; i < rhs._len; i++)
			{
				this->myArr[i] = rhs.myArr[i];
			}
		}
		Array& operator=(const Array& rhs)
		{
			if (this == &rhs)
				return *this;
			this->myArr = new Array[rhs.len];
			for (int i = 0; i < rhs.len; i++)
			{
				this->myArr[i] = rhs.myArr[i];
			}
			return *this;
		}
		unsigned int size() const
		{
			return this->_len;
		}

		~Array()
		{
			delete[] this->myArr;
		}
		T& operator[](unsigned int index)
		{
			if (index >= this->_len)
				throw std::out_of_range("Index out of range");
			return this->myArr[index];
		}
};


#endif
