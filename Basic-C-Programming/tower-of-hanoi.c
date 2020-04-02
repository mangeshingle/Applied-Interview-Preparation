#include <stdio.h>


/*
http://mathforum.org/dr.math/faq/faq.tower.hanoi.html

Move 1: move disk 3 to post C
Move 2: move disk 2 to post B
Move 3: move disk 3 to post B
Move 4: move disk 1 to post C
Move 5: move disk 3 to post A
Move 6: move disk 2 to post C
Move 7: move disk 3 to post C

*/

void toh(int n, char src, char dest, char aux){
    // termination case
    if(n == 1){
        printf("\nMove disk 1 from %c to %c", src, dest);
        return;
    }

    toh(n-1, src, aux, dest);
    printf("\nMove disk %d from %c to %c", n, src, dest);
    toh(n-1, aux, dest, src);

}

int main(){
    int n = 3;
    printf("\nDisk: %d",n);
    toh(n,'A', 'C', 'B');
    return 0;
}

