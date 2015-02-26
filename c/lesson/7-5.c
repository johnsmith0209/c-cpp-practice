#include <stdio.h>
//输入10个数字并按从大到小的顺序排列

int main(){
	int a[10] = {1, 3213, 241, 23, 123, 4232, 674, 734, 313, 41};
	int i;
	for (; i < 10; i++) {
		for (int j = i+1; j < 10; j++) {//从i+1开始 只跟之后的比
			if (a[i] < a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}	
	i=0;
	printf("After sorted\n");
	while (i<10)
		printf("a[%d]=%d\n", i, a[i++]);
}
