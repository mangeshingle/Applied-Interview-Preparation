#include <stdio.h>

int main(){
    int a = 87;
    float b = 4.5;

    int *p1 = &a; 
    float *p2 = &b;

    printf("\nValue of p1 = %d = Address of a = %d", p1, &a);
    printf("\nValue of p2 = %d = Address of b = %d", p2, &b);

    printf("\n\nAddress of p1 = %p",&p1);
    printf("\nAddress of p2 = %p",&p2);

    printf("\n\nValue of a = %d  %d  %d", a, *p1, *(&a));
    printf("\n\nValue of b = %.1f  %.1f  %.1f\n", b, *p2, *(&b));



    return 0;
}