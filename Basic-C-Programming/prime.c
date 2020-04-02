#include <stdio.h>
#include <math.h>

int isPrime(int a)
{
    int i;
    for (i=2; i<=a-1; i++)
    {
        if (a%i==0)
        {            
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;

    printf("Enter a number: ");
    // _flushall();
    scanf("%d", &a);

    if(isPrime(a) == 0){
        printf("%d is not a prime number",a);
    }else{
        printf("%d is a prime number",a);
    }

    printf("\n********** FASTER WAY *******************\n");
    int i;
    float sqrt_a = sqrt(a);
    for(i=2; i<sqrt_a; i++){
        if(a%i==0)
            break;
    }

    if(i>sqrt_a){        
        printf("%d is a prime number",a);
    }else{
        printf("%d is not a prime number",a);
    }


    return 0;
}