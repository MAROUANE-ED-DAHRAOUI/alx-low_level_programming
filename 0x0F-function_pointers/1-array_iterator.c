#include "function_pointers.h"

/**
 * array_iterator - maps an array through a fun pointer
 * @array: the int array
 * @size: the array size
 * @action: function pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ptr = array + size - 1;

	if (array && size && action)
	{
		while (array <= ptr)
		{
			action(*array++);
		}
	}
}
