#include <stdio.h>
#define M (y*y+3*y)
typedef int * PIN;

int main(){
	int s, y;
	printf("Input a number\n");
	scanf("%d", &y);
	s = 3 * M + 4 * M;//simple replacement
	PIN a, b;//type defined
	printf("s is %d\n", s);
	return 0;
}
