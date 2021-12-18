# minInArray() & maxInArray
# purpose 目的
**Find the largest(MAX) and smallest(MIN) in the array**
**尋找陣列中的最大(MAX)或最小值(MIN)**
# HOW TO
**Code**
```c
int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
int max = maxInArray(arr, 10);
printf("max: %d\n", max);
int min = minInArray(arr, 10);
printf("min: %d\n", min);
```
**Output**
```powershell
max: 288
min: 1
```
**Parameters**
(arr, length)
| parameter | type | usage |
| :--:      | :--: | :--   |
| arr       | array(pointer) | array to find |
| length    | int |  array length |
# Fulfill function 實踐方法
```c
/* 	max value in array
	input(arr: array)
	output: maxNum: int
*/
int maxInArray(int* arr, int length){
	int current;
	int maxNum = arr[0];
	for(int i=1; i<length; i++){
		current = arr[i];
		maxNum = MAX(maxNum, current);
	}
	return maxNum;
}

/* 	min value in array
	input(arr: array)
	output: minNum: int
*/
int minInArray(int* arr, int length){
	int current;
	int minNum = arr[0];
	for(int i=1; i<length; i++){
		current = arr[i];
		minNum = MIN(minNum, current);
	}
	return minNum;
}
```