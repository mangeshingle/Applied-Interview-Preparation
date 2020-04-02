#include <stdio.h>

int main(){
    int a = 5, *pi = &a;
    char b = 'x', *pc = &b;
    float c = 5.5, *pf = &c;

    printf("\nValue of pi = %p = Address of a = %p", pi, &a);
    printf("\nValue of pc = %p = Address of b = %p", pc, &b);
    printf("\nValue of pf = %p = Address of c = %p", pf, &c);

    printf("\nValue of a: %d", *pi);
    printf("\nValue of b: %c", *pc);
    printf("\nValue of c: %.1f\n", *pf);

    pi++;
    pc++;
    pf++;

    printf("\nValue of pi = %p = Address of a = %p", pi, &a);
    printf("\nValue of pc = %p = Address of b = %p", pc, &b);
    printf("\nValue of pf = %p = Address of c = %p\n", pf, &c);

    printf("Value of a: %d", *pi);
    printf("\nValue of b: %c", *pc);
    printf("\nValue of c: %.1f\n", *pf);

    return 0; 

}