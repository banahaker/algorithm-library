# Array Methods
include two function now:  
 - insertElement()
 - deleteElement()  

目前有兩個函式如下:  
 - insertElement()
 - deleteElement()
# Purpose 目的
**Operate(insert, delete) array in a function**  
**操作(插入、刪除)陣列**
# HOW TO
**Code**
```c
int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
insertElement(2, arr, 10, 13); // 在 arr 中的索引三插入13 insert 13 to index_2 in arr
arrayDisplay(arr, 10, 0);
deleteElment(3, arr, 10); // 刪除 arr 中的索引 3 delete index_3 in arr
arrayDisplay(arr, 10, 0);
```
**Output**
```powershell
[ 1, 2, 13, 3, 4, 5, 6, 7, 8, 9 ]
[ 1, 2, 13, 4, 5, 6, 7, 8, 9, 0 ]
```
**Parameters**  
insertElement():  
(location, arr, length, value)
| parameter | type | usage |
| :--:      | :--: | :--   |
| location  | int  | index to insert |
| arr       | array(pointer) | array to used |
| length    | int | array's length |
| value    | int | value to insert |

deleteElement():  
(location, arr, length)
| parameter | type | usage |
| :--:      | :--: | :--   |
| location  | int  | index to delete |
| arr       | array(pointer) | array to used |
| length    | int | array's length |
# Fulfill Function 實踐方法
```c
/* 	insert element
	input(location: int, arr: array, length: int, value: int)
	output: none(inserted array)
*/
int insertElement(int location, int arr[], int length, int value){
    if (location >= length ) return 0;
    for(int i=length-2; i>=location; i--)
        arr[i + 1] = arr[i];
    arr[location] = value;
}

/*	delete element
	input(location: int, arr: array, length: int)
	output: none(deleted array)
*/
int deleteElment(int location, int arr[], int length) {
    if(location >= length) return 0;
    for(int i=location; i<length; i++){
        arr[i] = arr[i+1];
    }
    arr[length-1] = 0;
}
```