#include <stdio.h>
int main(){
	int a, b;
	int *p1, *p2;
	a = 100;
	b = 12;
	p1=&a;
	p2=&b;
	printf("a is %d, b is %d\n", a, b);
	printf("*p1 is %d, *p2 is %d\n", *p1, *p2);
	if(&*p1==p1)
		printf("p1 equals to &*p1\n");
	if(*&a==a)
		printf("a equals to *&a\n");

	printf("&a is %x, &b is %x\n", (unsigned int)&a, (unsigned int)&b);
	printf("p1 is %x, p2 is %x\n", (unsigned int)p1, (unsigned int)p2);

	return 0;
}
