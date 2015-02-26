#include <stdio.h>
#define N 7
void insert_sort(int a[], int len){
	for (int i = 1; i < len; i++) {
		//从1 开始 向前找到要将i插入的位置
		int j = 0;
		while ((a[j] < a[i]) && j < i) //从小到大
			j++;

		//从j开始到i的元素依次向后移动
		if (j != i) {
			int temp = a[i];
			for (int k = i; k > j; k--) //将元素向后移动
				a[k] = a[k - 1];
			a[j] = temp;
		}
	}
}

int main(){
	int a[] = {14, 31, 43, 15, 36, 47, 18};
	
	insert_sort(a, N);

	for (int i = 0; i < N; i++)
		printf("a[%d] = %d \n", i, a[i]);

}
