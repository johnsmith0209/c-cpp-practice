#include <stdio.h>
//整型数据的溢出。
int main(){
	printf("The int size of this system is %lu\n",sizeof(int));
	printf("The short int size of this system is %lu\n",sizeof(short int));
	printf("The long int size of this system is %lu\n",sizeof(long int));

	short int a = 32767;
	int b = 2147483647;
	short int c;
	int d;
	c = a + 1;
	d = b + 1;
	printf("a is %hd, a+1=%hd \n", a, c);
	printf("b is %d, b+1=%d \n", b, d);
}
