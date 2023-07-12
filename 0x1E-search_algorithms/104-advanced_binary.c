#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, int low, int high, int value);

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return binary_search(array, 0, size - 1, value);
}

/**
 * binary_search - Performs a binary search on a sorted array
 *
 * @array: Pointer to the first element of the array to search in
 * @low: The starting index of the subarray
 * @high: The ending index of the subarray
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, int low, int high, int value)
{
    int mid, result;

    if (low > high)
        return -1;

    printf("Searching in array: ");
    for (int i = low; i <= high; i++)
    {
        printf("%d", array[i]);
        if (i != high)
            printf(", ");
    }
    printf("\n");

    mid = low + (high - low) / 2;

    if (array[mid] == value)
    {
        if (mid == low || array[mid - 1] != value)
            return mid;
        else
            return binary_search(array, low, mid, value);
    }
    else if (array[mid] < value)
    {
        return binary_search(array, mid + 1, high, value);
    }
    else
    {
        return binary_search(array, low, mid - 1, value);
    }
}

