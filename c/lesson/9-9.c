#include <stdio.h>
int sq(int x){
	return x*x;
}
int main(){
	int i = 1;
	while(i <= 5)
		//printf("%d^2=%d\n", (i-1), sq(i++)); 
		printf("%d^2=%d\n", i, sq(i++));//gcc 
	return 0;
}
