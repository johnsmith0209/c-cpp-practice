#include <stdio.h>
//输出字符数组中的元素
int main(){
	int i, j;
	char a[][5] = {{'B', 'A', 'S', 'I', 'C'}, {'S', 'T', 'U', 'D', 'Y'}};
	for(int i=0; i<2; i++){
		for(int j=0; j<5; j++){
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
