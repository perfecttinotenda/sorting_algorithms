#include "sort.h"

/**
 * swap - pasina zviviri int
 * @a: int
 * @b: int
 * Return: pasina chachinja niswa int
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * partition - Part ye array &kushamdiswa pivot
 * @array: Array
 * @low: int
 * @high: int
 * @size: size yezera re size_t
 * Return: index ye int
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x = low - 1, y;

	for (y = low; y <= high; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				swap(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}
	return (x);
}
/**
 * lomuto_qsort - Sotin'i Recursively ye Array
 * @array: Array to be sorted
 * @low: kuzasi zasi kwearray
 * @high: Kkura val o array
 * @size: Size yema_rray
 * Return: nithing
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		lomuto_qsort(array, low, i - 1, size);
		lomuto_qsort(array, i + 1, high, size);
	}
}
/**
 * quick_sort - Quick_sort yema  Algorithmme using lomuto_part
 * @array: Array_2_sort
 * @size: Size ye_Array
 * Return: Sorted Array_none
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
