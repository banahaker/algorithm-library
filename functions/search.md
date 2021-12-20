# Search
include two search function:
 - binarySearch()
 - linearSearch()  

包括以下兩種函式:  
 - binarySearch()
 - linearSearch()
# Purpose 目的
**Search a target in a array and return that's index**  
**在陣列中搜尋一目標並回傳(return)其所引值(index)**
# HOW TO
**Code**  
```c
int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
int result = linearSearch(arr, 10, 9);
printf("%d\n", result);
```
**Output**  
```powershell
7
```  
or   
**Code**   
```c
int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
insertSort(arr, 10);
int result = binarySearch(arr, 10, 9);
printf("%d", result);
```
**Output**  
```powershell
8
```
**Parameters**  
(arr, length, target)
| parameter | type | usage |
| :--:      | :--: | :--   |
| arr       | array(pointer) | array to used |
| length    | int | array's length |
| target    | int | target to find |
# Fulfill function 實踐方法
```c
/*	binary search
	input(arr: array, length: int, target: int)
	output: target's index(if target is not in arr will return -1): int
	notion: must use sorted array
*/
int binarySearch(int* arr, int length, int target) {
	int mid;
	int left = 0;
	int right = length - 1;
	while (left <= right) {
		mid = (left+right)/2;
		if (arr[mid] == target) return mid;
		else if (arr[mid] < target) left = mid + 1;
		else if (arr[mid] > target) right = mid - 1;
	}
	return -1;
}

/* 	linear search
	input(arr: array, length: int, target: int)
	output: target's index(if target isn't in arr will return -1): int
*/
int linearSearch(int* arr, int length, int target) {
	for(int i=0; i<length; i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}
```