#include <stdio.h>
//C语言字符数组和普通数组的区别
void flush(){
	int c;
	while((c=getchar())!='\n' && c!=EOF);
}
int main(){
	int num[] = {1,3,4,5,7};
	char str[] = "asdffasd";

	int i;
	// num, str 是地址，由系统分配，与数组本身没有任何关系	
	printf("num = %d, str = %d \n", num, str);
	// num 等价于 &num[0]
  if(num == &num[0]){
  	printf("num = &num[0] \n");
  }
	// str 等价于 &str[0]
  if(str == &str[0]){
    printf("str = &str[0] \n");
  }
	
	printf("Input a number: \n");
	scanf("%c", &str[0]);
	flush();

	printf("Input a char: \n");
	scanf("%c", &str[1]);
	flush();
	
	printf("Input 10 number: ");
	for(i=0; i<10; i++){
		scanf("%d", &num[i]);  // num[i]为某个元素，必须要加&取得它的地址
	}

	printf("The final num[] = %d, %d, %d, %d, %d \n", num[0], num[1], num[2], num[3], num[4]);
	printf("The final str[] = %s \n", str);
	return 0;
}
