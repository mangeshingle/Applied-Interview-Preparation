#include <stdio.h>

// 1,1,2,3,5,8,13
int main(){
    int i_minus_1 =1, i_minus_2=0;
    int term,j=1;
    int total=1;

    int i;

    printf("Enter a the term for fibonnaci: ");
    scanf("%d",&term);
    printf("%d ",i_minus_1);
    
    while(j<term){
        i = i_minus_1 + i_minus_2;
        total+=i;
        printf("%d ", i);
        i_minus_2 = i_minus_1;// 
        i_minus_1 = i;
        j++;                
    }
    printf("\nTotal is %d",total);

    return 0;
}