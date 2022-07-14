#include "al.h" // 引入函式庫 import library

int main()
{
	// println("algorithm library test"); // 全行顯示 (自動加入'\n')
	// int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
	// arrayDisplay(arr, 10, 0);										 // 顯示陣列 display array
	// insertSort(arr, 10);												 // 陣列排序 array sort
	// arrayDisplay(arr, 10, 0);										 // 顯示陣列 display array
	// int searchResult = binarySearch(arr, 10, 4); // 陣列搜尋 array search
	// printf("searchResult: %d\n", searchResult);
	// int maxValueInArray = maxInArray(arr, 10); // 陣列最大值 largest value in array
	// int minValueInArray = minInArray(arr, 10); // 陣列最小值 smallest value in array
	// printf("maxValueInArray: %d\n", maxValueInArray);
	// printf("minValueInArray: %d\n", minValueInArray);
	// double a = 10.6, b = 8.5;
	// double max = MAX(a, b), min = MIN(a, b); // 取大值與小值
	// printf("max: %f, min: %f\n", max, min);
	// insertElement(2, arr, 10, 13); // 在 arr 中的索引三插入13 insert 13 to index_2 in arr
	// arrayDisplay(arr, 10, 0);
	// deleteElement(3, arr, 10); // 刪除 arr 中的索引 3 delete index_3 in arr
	// arrayDisplay(arr, 10, 0);
	Node *head = (Node *)malloc(sizeof(Node));
	head->data = 20;
	Node *second = new_node(head, 12);
	printList(head);
	return 0;
}