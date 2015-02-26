#include <stdio.h>
//输出1+2+3+...+99+100的值
int main(){
	int sum = 0, i = 1;
	while(i <= 100){
		sum += i++;
	}
	printf("1+2+3+...+99+100=%d\n", sum);
	return 0;
}
