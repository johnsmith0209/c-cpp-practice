#include <stdio.h>
//数据大小。
int main(){
	printf("The char size is %lu\n",sizeof(char));
	printf("The int size is %lu\n",sizeof(int));
	printf("The int * size is %lu\n",sizeof(int *));
	printf("The short int size is %lu\n",sizeof(short int));
	printf("The long int size is %lu\n",sizeof(long int));
	printf("The float size is %lu\n",sizeof(float));
	printf("The double size is %lu\n",sizeof(double));
	printf("The long double size is %lu\n",sizeof(long double));
}
