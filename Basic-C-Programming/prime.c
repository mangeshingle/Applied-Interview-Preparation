#include <stdio.h>
#include <conio.h>

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
    return 0;
}