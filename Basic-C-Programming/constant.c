#include <stdio.h>

#define PI 3.14159

int main(){
    const int a = 22;
    const int b = 022;
    const int c = 0x22;

    printf("PI: %f\n", PI);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

}