#include <stdio.h>
//对例1-3稍加修改，在printf中使用多个参数，在scanf中使用'|'作为分隔符
int max(int a, int b);
int max(int a, int b){
	if (a <= b)
		return b;
	else
		return a;
}

int main(){
	int a, b;
	printf("Please input two numbers separated by | \n");
	scanf("%d|%d", &a, &b);
	printf("The max int is %d\n", max(a, b));
}
