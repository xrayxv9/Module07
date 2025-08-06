#pragma once

#include <iostream>
#include <cctype>

template <typename T>

void iter(T *list, size_t len, void (*function)( T &))
{
	if (list == NULL || function == NULL)
		return ;
	for (size_t x = 0; x < len; x++)	
		function(list[x]);
}

template <typename T>
void iter(const T *list, size_t len, void (*function)( T &))
{
	if (list == NULL || function == NULL)
		return ;
	for (size_t x = 0; x < len; x++)	
		function(list[x]);
}
