#include <stdio.h>
//使用 scanf() 从控制台输入一个字符串，然后使用 printf() 将其输出

int main(void){
	char st[15];
	printf("Please input string(15)\n");
	scanf("%s", st);//这里之所以不用&符号是因为st就代表了指针初始位置
	printf("Your string is %s\n", st);
	return 0;
}
