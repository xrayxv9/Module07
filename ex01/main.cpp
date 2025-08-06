#include "iter.hpp"
#include <cctype>

void increment(int &item)
{
	item++;
}

void toUpper(char &item)
{
	item = std::toupper(item);
}

int main(void)
{
	int  t[8] = {0, 1, 2, 3, 4, 5, 6, 7};

	std::cout << "original" << std::endl << std::endl;
	for (size_t i = 0; i < 8; i++)
		std::cout << t[i] << std::endl;
	std::cout << std::endl;
	iter(t, 8, increment);
	std::cout << "post iter" << std::endl;
	for (size_t i = 0; i < 8; i++)
		std::cout << t[i] << std::endl;
	std::cout << std::endl;

	char c[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

	std::cout << "original" << std::endl << std::endl;
	
	for (size_t i = 0; i < 8; i++)
		std::cout << c[i] << std::endl;
	std::cout << std::endl;
	iter(c, 8, toUpper);
	std::cout << "post iter"<< std::endl;
	for (size_t i = 0; i < 8; i++)
		std::cout << c[i] << std::endl;

	// const char a[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	//
	// std::cout << "original" << std::endl << std::endl;
	// 
	// for (size_t i = 0; i < 8; i++)
	// 	std::cout << a[i] << std::endl;
	// std::cout << std::endl;
	// iter(a, 8, toUpper);
	// std::cout << "post iter"<< std::endl;
	// for (size_t i = 0; i < 8; i++)
	// 	std::cout << a[i] << std::endl;
}
