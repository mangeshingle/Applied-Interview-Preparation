#include <stdio.h>

void value(int x, int y);
void reference(int *x, int *y);

int main(){
    int a = 5, b = 9;
    printf("\nCALL OR PASS BY VALUE\n");    
    printf("Before call by value --> a: %d, b: %d", a, b);
    value(a, b);
    printf("\nAfter call by value --> a: %d, b: %d", a, b);
    
    printf("\n\nCALL OR PASS BY REFERENCE\n");
    printf("Before call by reference --> a: %d, b: %d", a, b);   
    reference(&a, &b);
    printf("\nAfter call by reference --> a: %d, b: %d\n", a, b);    

    int m = 199;
    int *ptr = &m;

    printf("\nm: %d, &m: %d, ptr: %d, *ptr: %d, &ptr: %d\n",m, &m, ptr, *ptr, &ptr);

    return 0;
}

void value(int x, int y){
    x++;
    y++;
    printf("\nx: %d, y: %d", x, y);
    return;
}

void reference(int *x, int *y){
    (*x)++;
    (*y)++;
    printf("\n*x: %d, *y: %d", *x, *y);
    return;
}