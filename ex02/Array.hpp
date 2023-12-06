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
			this->myArr = NULL;
		}
		Array(unsigned int n)
		{
			this->_len = n;
			this->myArr = new T[n]();
		}
		Array(const Array& rhs)
		{
			this->myArr = new T[rhs._len];
			*(this->myArr) = *(rhs.myArr);
		}
		Array& operator=(const Array& rhs)
		{
			if (this == &rhs)
				return *this;

			delete[] this->myArr;
			this->myArr = new T[rhs._len];

			*(this->myArr) = *(rhs.myArr);
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
