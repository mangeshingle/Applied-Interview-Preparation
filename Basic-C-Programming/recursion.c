#include <stdio.h>


int fibonnaci(int n){
    printf("%d ", n);
    if(n <= 1){
        return n;
    }    

    return (fibonnaci(n-1) + fibonnaci(n-2));

}

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
int main(){
    int fibo = fibonnaci(5);
    printf("\n\nFibonnaci total: %d",fibo);
}



