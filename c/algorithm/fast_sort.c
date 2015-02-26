#include <stdio.h>
#define N 10
void printArr(int a[], int len){
	for (int i=0;i<len;i++)
		printf("%d ", a[i]);
	printf("\n");
}

int partition(int a[], int start, int end){
	int key = a[start];
	while (start < end) {
		while (end > start && (key <= a[end]))
			end--;
		if (start < end){
			a[start++] = a[end];
			printf("Move end to start\n");
			printArr(a, N);
		}

		while (start < end && (a[start] <= key))
			start++;
		if (start < end) {
			a[end--] = a[start];
			printf("Move start to end\n");
			printArr(a, N);
		}
	}
	a[start] = key;
	printf("Move done partition\n");
	printArr(a, N);
	return start;
}

void fast_sort(int a[], int start, int end){
	int pos;
	if (start < end) {
		pos = partition(a, start, end);
		fast_sort(a, start, pos);
		fast_sort(a, pos + 1, end);
	}
}

int main(){
	int a[] = {1, 10, 3, 12, 32, 14, 51, 43, 21, 42};

	fast_sort(a, 0, N - 1);
	printf("\nAfter Sort\n");
	printArr(a, N);
}
