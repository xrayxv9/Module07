#include "Array.hpp"

int main()
{
	Array<int>	tab(10);
	int			*array = new int[10];
	srand(time(0));
	int value;

	std::cout << std::endl << "BASE" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "Array : " << tab[i] << std::endl;

	std::cout << std::endl << "CHANGE VALUES" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		value = rand() % 20;
		array[i] = value;
		tab[i] = value;
	}

	std::cout << std::endl << "PRINT CHANGED VALUES" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "int : " << array[i] << std::endl;
		std::cout << "Array : " << tab[i] << std::endl;
	}

	std::cout << std::endl << "COPY VALUES" << std::endl << std::endl;
	Array<int> t(tab);

	for (int i = 0; i < 10; i++)
	{
		std::cout << "cpy_tab : " << t[i] << std::endl;
		std::cout << "Array : " << tab[i] << std::endl;
	}

	t[0] = rand() % 1999;

	std::cout << std::endl << "MODIFIED FIRST VALUE" << std::endl << std::endl;
	std::cout << "original : " << tab[0] << std::endl;
	std::cout << "modified : " << t[0] << std::endl;


	// std::cout << std::endl << "CONST TESTS " << std::endl << std::endl;
	// const Array<int> a(tab);
	//
	// a[0] = rand() % 1999;
	//
	// std::cout << a[0] << std::endl;

	delete [] array;
}
