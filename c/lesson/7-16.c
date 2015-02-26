#include <stdio.h>
#include <string.h>

int main(){
	int k;
	static char st1[15], st2[15]="C Language";
	printf("Input a string:\n");
	scanf("%[^\n]", st1);
	k = strcmp(st1, st2);
	if (k > 0) 
		printf("st1 > st2\n");
	else if (k == 0)
		printf("st1 = st2\n");
	else
		printf("st1 < st2\n");
}
