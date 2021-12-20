# algorithm library from LAZP
**A algorithm library for C/C++ programmer**
# version information 版本資訊
 - v1.0.1
 - developer 開發者: LAZPbanahaker
 - latest update 最近更新日期: 2021/12/20
 - support function 支援函式數量: 12
 ### new function in latest version 最新版本新增功能
 - insertElement()
 - deleteElement() 
# HOW TO
Put al.h file in your project folder, then `#include` this header file  
將 al.h 放在專案資料夾下然後用 `#include` 方式引入如下  
```c
#include "al.h"
```
# All algorithm function 所有函數
 [instructions for use](https://github.com/banahaker/algorithm-library/tree/main/functions)
 [使用說明](https://github.com/banahaker/algorithm-library/tree/main/functions)
 - [println()](https://github.com/banahaker/algorithm-library/blob/main/functions/println.md)
 - [arrayDisplay()](https://github.com/banahaker/algorithm-library/blob/main/functions/arrayDisplay.md)
 - [MAX()](https://github.com/banahaker/algorithm-library/blob/main/functions/MAX()%26MIN().md)
 - [MIN()](https://github.com/banahaker/algorithm-library/blob/main/functions/MAX()%26MIN().md)
 - [maxInArray()](https://github.com/banahaker/algorithm-library/blob/main/functions/min%26maxInArray.md)
 - [minInArray()](https://github.com/banahaker/algorithm-library/blob/main/functions/min%26maxInArray.md)
 - [bubbleSort()](https://github.com/banahaker/algorithm-library/blob/main/functions/sort.md)
 - [insertSort()](https://github.com/banahaker/algorithm-library/blob/main/functions/sort.md)
 - [binarySearch()](https://github.com/banahaker/algorithm-library/blob/main/functions/search.md)
 - [linearSearch()](https://github.com/banahaker/algorithm-library/blob/main/functions/search.md)
 - [insertElement()](https://github.com/banahaker/algorithm-library/blob/main/functions/arrayMethod.md)
 - [deleteElement()](https://github.com/banahaker/algorithm-library/blob/main/functions/arrayMethod.md)
# TODO
using those algorithm function you can programming faster  
 - [x] auto include <stdio.h> and <stdlib.h>(in C)  
 - [ ] not include C++ basic library   
# Example 範例
**Code**
```c
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
	printf("max: %f, min: %f\n", max, min);
	insertElement(2, arr, 10, 13); // 在 arr 中的索引三插入13 insert 13 to index_2 in arr
	arrayDisplay(arr, 10, 0);
	deleteElment(3, arr, 10); // 刪除 arr 中的索引 3 delete index_3 in arr
	arrayDisplay(arr, 10, 0);
	return 0;
}
```
**Output**
```powershell
algorithm library test
[ 5, 4, 3, 8, 7, 6, 1, 9, 288, 2 ]
[ 1, 2, 3, 4, 5, 6, 7, 8, 9, 288 ]
searchResult: 3
maxValueInArray: 288
minValueInArray: 1
max: 10.600000, min: 8.500000
[ 1, 2, 13, 3, 4, 5, 6, 7, 8, 9 ]
[ 1, 2, 13, 4, 5, 6, 7, 8, 9, 0 ]
```