#pragma once

#include <iostream>

template< typename T >

void swap(T& first, T& second)
{
	T tmp;

	tmp = first;
	first = second;
	second = tmp;
}

template< typename U >

U min(U first, U second)
{
	return ( first >= second ? second : first);
}

template <typename V> V max(V first, V second)
{
	return ( first <= second ? second : first);
}
