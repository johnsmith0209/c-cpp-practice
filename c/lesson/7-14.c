#include <stdio.h>
#include <string.h>
int main(){
	static char st1[30]="My name is ";
	char st2[30];
	printf("Please input your name:\n");
	//scanf("%[^\n]", st2); /*能接收空格符*/
	scanf("%s", st2); /*不能接收空格符*/

	strcat(st1, st2);
	printf("%s\n", st1);
}
