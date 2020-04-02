#include <stdio.h>

int main(){
    int i;
    printf("\nEnter a number: ");
    scanf("%d", &i);
    goto logic;
    
    odd:
        printf("\nI am in odd\n");
        printf("Number %d is odd.",i);
        goto end;
    
    logic:
        if(i%2==0){
            goto even;// Forward jump
            printf("This should not get executed"); 
        }                       
        else{
            goto odd; // Backward jump
            printf("This should not get executed as well."); 
        }           
    
    even:
        printf("\nI am in even\n");
        printf("Number %d is even.",i);
        goto end;

    end:
        printf("\nI am in end\n");
        printf("Thank you.\n");

    printf("Gotcha...");
    return 0;   

}