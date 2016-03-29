#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

typedef struct _treeNode{
    int val;
    struct _treeNode *left;
    struct _treeNode *right;
} treeNode;

int rand1(){
    return rand() % 2;
}

int randN_Ct( int n ){
    if( n == 0 )
        return 0;
    if( n < 0 )
        return -randN_Ct(-n);

    int d = 0;
    int n2 = n;

    while( n2 > 0 ){
        n2 >>= 1;
        d++;
    }

    int i, x, rzt, tmpRzt;
    rzt = 0;
    for(i = d-1 ; i >= 0; i--){
        do {
            x = rand1();
            x <<= i;
            tmpRzt = x | rzt;
        }while(tmpRzt>n);
        rzt = tmpRzt;
    }
    return rzt;
}
int randN_Jeff( int n ){
    if( n == 0 )
        return 0;
    if( n < 0 )
        return -randN_Jeff(-n);

    int d = 0;
    int n2 = n;

    while( n2 > 0 ){
        n2 >>= 1;
        d++;
    }

    int i, x, rzt, tmpRzt;
    rzt = 0;
    while(1){
        x = rand1();
        for(i = 0; i < d - 1; i++){
            x <<= 1;
            x = x | rand1();
        }
        if( x <= n)
            return x;
    }
}
int main(){
    srand(time(NULL));
    clock_t begin, end;
    double time_spent;
    begin = clock();
    for(int i = 0;i < 100000000; i++){
        randN_Ct(1000000000);
    }
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("CLOCKS_PER_SEC is %d, time spent %f s\n", CLOCKS_PER_SEC, time_spent);
}