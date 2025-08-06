#pragma once

#include <cstdlib>
#include <iostream>


template <typename T>

class Array
{
	public:
		Array() { _array = NULL; _size = 0; }
	
		Array(unsigned int n)
		{
			_array = new T[n];

			for (unsigned int  i = 0; i < n; i++)
				_array[i] = 0;
			_size = n;
		}
		~Array() { delete [] _array; }

		T &operator[](int index)
		{
			unsigned int num = index;

			if (_array && _size > 0)
			{
				if ( index < 0 )
					throw IndexTooLowException();
				if ( num >= _size )
					throw IndexTooHighException();
				else
					return _array[index];
			}
			throw NoSizeGivenException();
		}
		
		const T &operator[](int index) const
		{
			unsigned int num = index;

			if (_array && _size > 0)
			{
				if ( index < 0 )
					throw IndexTooLowException();
				if ( num >= _size )
					throw IndexTooHighException();
				else
					return _array[index];
			}
			throw NoSizeGivenException();
		}



		Array &operator=( const Array &cpy )
		{
			if (this->_array)
				delete [] _array;
			if (this != &cpy)
			{
				this->_size = cpy.size();
				this->_array = new T[cpy.size()];
				for (unsigned int i = 0; i < _size; i++)
					this->_array[i] = cpy._array[i];
			}
			return *this;
		}

		Array( const Array &cpy )
		{
			_array = NULL;
			_size = 0;
			*this = cpy;
		}

		class IndexTooLowException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("ERROR : index too low. impossible.");
				}
		};

		class IndexTooHighException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("ERROR : index too high. impossible.");
				}
		};

		class NoSizeGivenException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("ERROR : no size was given during the initialisation. impossible.");
				}
		};

		unsigned int size() const
		{
			return(_size);
		}

	private:
		T *_array;
		unsigned int _size;
};
