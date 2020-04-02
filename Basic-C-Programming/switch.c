#include <stdio.h>


int main(){
    int a,b;
    char op;
    printf("Enter + operator: ");
    scanf("%s",&op);
    
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);


    switch(op){
        case '+':
            printf("%d\n",a);
            printf("%d\n",b);
            printf("Result: %d",(a+b));
            break;
        default:
            printf("Wrong opeartor enserted.");
    }
    

    return 0;
}