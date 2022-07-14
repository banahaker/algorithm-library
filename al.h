#include <stdio.h>
#include <stdlib.h>
// command show
/* 	basic print
	input(text: char[])
	output: none
*/
#define println(text) \
	printf(text);       \
	printf("\n");

/* 	display a array
	input{
		arr: array -> array to display
		length: int -> length of array
		direction: int -> display direction for array (0: from index0 to indexEnd, 1: from indexEnd to index0)
	}
	output: arr[]
*/
void arrayDisplay(int arr[], int length, int direction)
{
	if (direction == 0)
	{
		printf("[");
		for (int i = 0; i < length; i++)
		{
			if (i != length - 1)
			{
				printf(" %d,", arr[i]);
			}
			else
			{
				printf(" %d ]\n", arr[i]);
			}
		}
	}
	else if (direction == 1)
	{
		printf("[");
		for (int i = length - 1; i >= 0; i--)
		{
			if (i > 0)
			{
				printf(" %d,", arr[i]);
			}
			else
			{
				printf(" %d ]\n", arr[0]);
			}
		}
	}
	else
	{
		printf("direction error");
		return;
	}
}

// Comparison
/*	max : comparison a and b then return the big one
	input(a: int, b: int)
	output: max one(a or b): int
*/
#define MAX(a, b) ((a) > (b) ? (a) : (b))

/*	max : comparison a and b then return the small one
	input(a: int, b: int)
	output: min one(a or b): int
*/
#define MIN(a, b) ((a) < (b) ? (a) : (b))

/* 	max value in array
	input(arr: array)
	output: maxNum: int
*/
int maxInArray(int *arr, int length)
{
	int current;
	int maxNum = arr[0];
	for (int i = 1; i < length; i++)
	{
		current = arr[i];
		maxNum = MAX(maxNum, current);
	}
	return maxNum;
}

/* 	min value in array
	input(arr: array)
	output: minNum: int
*/
int minInArray(int *arr, int length)
{
	int current;
	int minNum = arr[0];
	for (int i = 1; i < length; i++)
	{
		current = arr[i];
		minNum = MIN(minNum, current);
	}
	return minNum;
}

// Sort
/* Bubble Sort
	 input(arr: array, length: int)
	 output: none
*/
void bubbleSort(int arr[], int length)
{
	int tmp;
	for (int t = 0; t < length - 1; t++)
	{
		for (int i = 0; i < length - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
}

/* 	Insert Sort
	input(arr: array, length: int)
	output: none
*/
void insertSort(int arr[], int length)
{
	int key, j;
	for (int i = 0; i < length; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

// search
/*	binary search
	input(arr: array, length: int, target: int)
	output: target's index(if target is not in arr will return -1): int
	notion: must use sorted array
*/
int binarySearch(int *arr, int length, int target)
{
	int mid;
	int left = 0;
	int right = length - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == target)
			return mid;
		else if (arr[mid] < target)
			left = mid + 1;
		else if (arr[mid] > target)
			right = mid - 1;
	}
	return -1;
}

/* 	linear search
	input(arr: array, length: int, target: int)
	output: target's index(if target isn't in arr will return -1): int
*/
int linearSearch(int *arr, int length, int target)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == target)
		{
			return i;
		}
	}
	return -1;
}

// int array method
/* 	insert element
	input(location: int, arr: array, length: int, value: int)
	output: none(inserted array)
*/
int insertElement(int location, int arr[], int length, int value)
{
	if (location >= length)
		return 0;
	for (int i = length - 2; i >= location; i--)
		arr[i + 1] = arr[i];
	arr[location] = value;
}

/*	delete element
	input(location: int, arr: array, length: int)
	output: none(deleted array)
*/
int deleteElement(int location, int arr[], int length)
{
	if (location >= length)
		return 0;
	for (int i = location; i < length; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[length - 1] = 0;
}

/* Basic Data structure */
typedef struct
{
	int data;
	struct Node *next;
} Node;

Node *new_node(Node *previous, int data)
{
	Node *new_node = (struct Node *)malloc(sizeof(Node));
	new_node->data = data;
	previous->next = new_node;
	return new_node;
}