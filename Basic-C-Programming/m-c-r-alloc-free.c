#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pm, *pr;
    float *pc;
    int ni, nf;
    printf("\nEnter number of integers: ");
    scanf("%d", &ni);

    printf("Enter number of floats: ");
    scanf("%d", &nf);

    pm = (int *) malloc(ni*sizeof(int)); // malloc
    pc = (float *) calloc(nf, sizeof(float)); // calloc

    if(pm==NULL || pc == NULL){
        printf("\nNot enough memory\n");
        exit(1);
    }

    for(int i=0; i<ni; i++){
        printf("Enter %d integer: ", i+1);
        scanf("%d",(pm+i));
    }

    for(int i=0; i<nf; i++){
        printf("Enter %d float: ", i+1);
        scanf("%f",(pc+i));
    }

    printf("Entered integer numbers are: ");
    for(int i=0; i<ni; i++){
        printf("%d  ",*(pm+i));             
    }

    printf("\nEntered float numbers are: ");
    for(int i=0; i<nf; i++){
        printf("%.1f  ",*(pc+i));             
    }

    pr = (int *) realloc(pm, 6*sizeof(int)); // realloc

    if(pr==NULL){
        printf("\nNot enough memory\n");
        exit(1);
    }

    printf("\n");
    for(int i=ni; i<6; i++){
        printf("Enter %d integer: ", i+1);
        scanf("%d",(pr+i));
    }

    printf("Entered integer numbers are after reallocation: ");
    for(int i=0; i<6; i++){
        printf("%d  ",*(pr+i));             
    }

    free(pm); // free malloc
    free(pc); // free calloc
    free(pr); // free realloc

    printf("\n");
    return 0;
}