#include <stdio.h>
//输出两个整数中较大的数
int max(int a, int b);
int max(int a, int b){
	if (a <= b)
		return b;
	else
		return a;
}
int main(){
	int a, b;
	printf("Please input two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("The max int is %d\n", max(a, b));
	return 0;
}
