#include <stdio.h>

int main(){
	int a[5] = {1,3,4,5,7};
	int b[6] = {1,41,5,35,436,23};
	printf("size of a[5] is %lu\n", sizeof(a));
	printf("size of &a is %lu\n", sizeof(&a));
	printf("a is %d\n", a);
	printf("size of b[6] is %lu\n", sizeof(b));
	return 0;
}
