#include <stdio.h>
void flush();
void flush(){
	int c;
	while ((c=getchar()) != '\n' && c != EOF);
}

int main(){
	int a;
	char b;
	printf("Input a number:\n");
	scanf("%d", &a);
	flush();

	printf("Input a char:\n");
	scanf("%c", &b);

	printf("a is %d, b is %c \nEnd\n", a, b);
	return 0;
}
