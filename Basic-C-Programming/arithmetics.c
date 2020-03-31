#include <stdio.h>

int main(){
    int a=-2,b=4;
    printf("\n");
    printf("%d\t%d",a,b);
    int x=17, y=4;

    printf("\n");
    printf("Sum: %d\n",x+y);
    printf("Difference: %d\n",x-y);
    printf("Product: %d\n",x*y);
    printf("Quotient: %d\n",x/y);
    printf("Remainder: %d",x%y);
    printf("\n");

    float m=13.4,n=3.2;
    printf("\n");    
    printf("%f\t%f",m,n);
     printf("\n"); 
    printf("Sum: %.2f\n",m+n);
    printf("Difference: %.2f\n",m-n);
    printf("Product: %.2f\n",m*n);
    printf("Quotient: %.2f\n",m/n);
    printf("\n");

    int o=7, p=2;
    float q=2.0;
    printf("\n");
    printf("7/2(Wrong value): %f\n",o/p);
    printf("7/2: %d\n",o/p);
    printf("7/2.0: %f\n",o/q);
    printf("\n");

    return 0;
}