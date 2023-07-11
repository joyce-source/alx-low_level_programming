#include "SEARCH_ALGOS.H"

/**
 * binary_search - Search for val in sorted array int using binary search algo
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present or the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int i;
	
	if (array == NULL)
		return -1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
