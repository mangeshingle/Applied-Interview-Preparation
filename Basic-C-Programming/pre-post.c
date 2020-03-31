#include <stdio.h>

int main(){
    int x=8;
    printf("\nPREFIX\n");
    printf("x: %d\n",x);
    printf("x: %d\n",++x);
    printf("x: %d\n",x);
    printf("x: %d\n",--x);
    printf("x: %d\n",x);

    x = 8;
    printf("\nPOSTFIX\n");
    printf("x: %d\n",x);
    printf("x: %d\n",x++);
    printf("x: %d\n",x);
    printf("x: %d\n",x--);
    printf("x: %d\n",x);


    printf("\nEXAMPLE\n");
    int m=10;
    int n,n1;
    n = ++m; // m=11, n=11
    n1 = m++; // n1=11, m=12
    n--; // n=10
    --n1; // n1=10
    n-=n1; //10-10 = 0
    printf("Value of n is %d\n",n);

    return 0;
}