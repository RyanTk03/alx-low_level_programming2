#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: the array of parameters.
 * @size: the size of the array.
 * @action: the function to execute.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size <= 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
