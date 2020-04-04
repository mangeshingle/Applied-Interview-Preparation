#include <stdio.h>

int main(){
    char str[] = "GATE";
    printf("\n");
    for(int i=0; str[i] != '\0'; i++){
        printf("Character: %c\t", str[i]);
        printf("Address: %d\n", &str[i]);
    }

    char firstname[40];
    printf("\nEnter your name: ");
    scanf("%s",&firstname);

    printf("\nHello %s %s, How are you?\n", firstname, "Ingle");

    return 0;
}