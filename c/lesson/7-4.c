#include <stdio.h>
//输入10个数字并输出最大值

int main(){
	int x, max, a[10];
	printf("Please input 10 numbers\n");
	for(int i=0; i<10; i++)
		scanf("%d", &a[i]);
	max=a[0];
	for(int i=0; i<10; i++)
		if(a[i]>max) max=a[i];
	printf("The max of the input nums is %d\n", max);
}
