# arrayDisplay()
# Purpose 目的
**顯示出陣列，並加上中括號以美化**  
**show array in command line and that's beautiful**
# HOW TO
**code**  
```c
int arr[10] = {5, 4, 3, 8, 7, 6, 1, 9, 288, 2};
arrayDisplay(arr, 10, 0);
```
**output**  
```powershell
[ 5, 4, 3, 8, 7, 6, 1, 9, 288, 2 ]
```
**Parameters**  
**(arr, length, direction)**  
| parameter | type | usage |
| :--: | :---:  | :----|
| arr | array(pointer) | -> array to display 
| length | int | -> length of array
| direction | int | -> display direction for array (0: from index_0 to index_End, 1: from index_End to index_0)  

# Fulfill function 實踐方法
```c
void arrayDisplay(int arr[], int length, int direction) {
	if (direction == 0) {
		printf("[");
		for (int i = 0; i < length; i++) {
			if (i != length - 1) {
				printf(" %d,", arr[i]);
			}
			else {
				printf(" %d ]\n", arr[i]);
			}
		}
	}
	else if (direction == 1) {
		printf("[");
		for (int i = length - 1; i >= 0; i--) {
			if (i > 0) {
				printf(" %d,", arr[i]);
			}
			else {
				printf(" %d ]\n", arr[0]);
			}
		}
	}
	else {
		printf("direction error");
		return;
	}
}
```