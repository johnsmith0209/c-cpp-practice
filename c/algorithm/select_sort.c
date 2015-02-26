#include <stdio.h>

int main(){
	int arr[] = {3, 123, 454, 1};
	int len = sizeof(arr) / sizeof(int);

	int idx = 0;
	while (idx < len) {
		//find the min
		int minVal = arr[idx];
		int minIdx = idx;
		for (int i = idx+1; i < len; i++) {
			if (arr[i] < minVal) {//从小到大
				minIdx = i;	
				minVal = arr[i];
			}
		}

		if (minIdx != idx) { //将最小的放到idx上
			int tmp = arr[idx];
			arr[idx] = arr[minIdx];
			arr[minIdx] = tmp;
		}
		idx++;
	}

	for (int i = 0; i < len; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
