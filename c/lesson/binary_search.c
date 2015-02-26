#include <stdio.h>
#define N 10
int bi_search(int a[], int len, int target){
	int low = 0;
	int high = len - 1;
	while (low <= high) {
		int mid = (high + low) / 2;// ((high - low)/2) + low
		int midVal = a[mid];
		if (midVal == target)
			return mid;
		else if (midVal < target)
			low = mid++;
		else
			low = mid--;
	}
	return -1;
}

int main(){
	int a[] = {1, 3, 4, 15, 53, 243, 524, 561, 912, 1000};
	int target = 912;
	int targetIdx = bi_search(a, N, target);
	printf("target is %d, targetIdx is %d\n", target, targetIdx);
	return 0;
}
