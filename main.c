#include "al.h" // 引入函式庫 import library

int main() {
	println("algorithm library test"); // 全行顯示 (自動加入'\n')
	int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
	arrayDisplay(arr, 10, 0); // 顯示陣列 display array
	insertSort(arr, 10); // 陣列排序 array sort
	arrayDisplay(arr, 10, 0); // 顯示陣列 display array
	int searchResult = binarySearch(arr, 10, 4); // 陣列搜尋 array search
	printf("searchResult: %d\n", searchResult);
	int maxValueInArray = maxInArray(arr, 10); // 陣列最大值 largest value in array
	int minValueInArray = minInArray(arr, 10); // 陣列最小值 smallest value in array
	printf("maxValueInArray: %d\n", maxValueInArray);
	printf("minValueInArray: %d\n", minValueInArray);
	double a = 10.6, b = 8.5;
	double max = MAX(a, b), min = MIN(a, b); // 取大值與小值
	printf("max: %f, min: %f", max, min);
	return 0;
}