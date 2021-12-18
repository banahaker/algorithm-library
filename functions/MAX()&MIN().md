# MAX() & MIN()
# Purpose 目的
**get larger(MAX) or smaller(MIN) number in two value**  
**從兩數中取得最大值(MAX)或最小值(MIN)**
# HOW TO
**Code**
```c
int a = 8, b = 10;
int max = MAX(a, b);
printf("max: %d\n", max);
int min = MIN(a, b);
printf("min: %d\n", min);
```
**Output**
```powershell
max: 10
min: 8
```
**Parameters**  
(a, b)
| parameter | type | usage |
| :--:      | :--: | :--   |
| a         | int  | num1  |
| b         | int  | num2  |
# Fulfill function 實踐方法
```c
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define MIN(a, b) ((a) < (b) ? (a) : (b))
```