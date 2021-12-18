# println()
# Purpose 目的
**show a line text in command line(auto add '\n')**  
**顯示出一行字在文字介面上(terminal or cmd or powershell etc.)
# HOW TO 
**code**
```c
println("hello, world");
```
**Output**
```powershell
 hello, world
```
# Limit 限制
 - only support string now
# Fulfill function 實現方法
```c
#define println(text) \
		printf(text); \
		printf("\n");
```