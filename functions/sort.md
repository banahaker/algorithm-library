# Sort
include two sort function:  
 - bubbleSort()
 - insertSort()  
包括兩種排序法:
 - bubbleSort()
 - insertSort()
# Purpose 目的
**sort the array value from small to large**  
**由小到大排序陣列值**
# HOW TO
**Code**
```c
int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
bubbleSort(arr, 10);
arrayDisplay(arr, 10, 0);
```  
or  
```c
int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
insertSort(arr, 10);
arrayDisplay(arr, 10, 0);
```
**Output**
```powershell
[ 1, 2, 3, 4, 5, 6, 7, 8, 9, 288 ]
```
**Parameters**  
(arr, length)
| parameter | type | usage |
| :--:      | :--: | :--   |
| arr       | array(pointer) | array to used |
| length    | int | array's length |
# Fulfill function 實踐方法
```c
/* Bubble Sort
   input(arr: array, length: int)
   output: none
*/
void bubbleSort(int arr[], int length) {
	int tmp;
	for (int t = 0; t < length - 1; t++) {
		for (int i = 0; i < length - 1; i++) {
			if (arr[i] > arr[i + 1]) {
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
void insertSort(int arr[], int length) {
	int key, j;
	for (int i = 0; i < length; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
```