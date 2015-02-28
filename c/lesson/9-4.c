#include <stdio.h>
#define MAX(a, b) (a > b) ? a : b
/*
 * 1. This is different from {#defined MAX (a, b) (a > b) ? a : b}, because there is a white space between MAX and (
 * 2. In the macro definition, don't point out the arguments' type
 * 3. Always remember to wrap arguments with brackets so that there won't be mistake after marco replacement 
 */

int main(){
	int x, y, max;
	printf("Input 2 numbers\n");
	scanf("%d %d", &x, &y);
	max = MAX(x, y);
	printf("The max number is %d\n", max);
	return 0;
}
