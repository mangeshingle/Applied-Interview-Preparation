#include <stdio.h>


int main(){
    int *pa[3];
    int a=5, b=10, c=15;
    pa[0]=&a;
    pa[1]=&b;
    pa[2]=&c;

    printf("\n%d\n",pa);

    for(int i=0; i<3; i++){
        printf("\npa[%d]=%p\t",i, pa[i]);
        printf("*pa[%d]=%d",i, *pa[i]);
    }
    printf("\n");
    return 0;
}