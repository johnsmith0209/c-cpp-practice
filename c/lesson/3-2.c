#include <stdio.h>
//整型变量的定义与使用。
int main(){
	int a, b, c, d;
	unsigned u;
	a = 12;b = -24;u = 10;
	c = a + u;
	d = b + u;
	printf("a+u=%d; b+u=%d\n", c, d);
	return 0;
}
