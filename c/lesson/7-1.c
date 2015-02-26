#include <stdio.h>
//使用for循环为一个数组赋值，并将数组倒叙输出
int main(){
	int a[10];
	int i = 0;//在这里定义i 以便在for之后继续使用i
	for (; i<10; i++)
		a[i] = i;
	i--;
	while(i>=0)
		printf("a[%d]=%d\n", i, a[i--]);
	return 0;
}
