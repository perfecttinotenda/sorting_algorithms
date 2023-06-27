#include "sort.h"

/**
 *bubble_sort - sorts ma array e_int kubva kumusoro kuyenda kuzasi ne Alpha bet
 *@array: array yema  nhamba acho
 *@size: Zera re array yedu
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int num;

	if (array == NULL  || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				num = array[j];
				array[j] = array[j + 1];
				array[j + 1] = num;
				print_array(array, size);
			}
		}
	}
}
