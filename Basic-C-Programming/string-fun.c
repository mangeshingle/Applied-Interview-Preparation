#include <stdio.h>
#include <string.h>

int main(){
    char name[40];
    printf("\n-----------------------------");
    printf("\n--------- strlen ------------");
    printf("\n-----------------------------");
    printf("\nEnter your full name: ");
    gets(name);
    printf("\nLength of the string is: %d\n", strlen(name));

    printf("\n-----------------------------");
    printf("\n--------- strcmp ------------");
    printf("\n-----------------------------");
    char fruit[] = "mango";
    char buffer[40];
    printf("\n");
    do{
        printf("Guess my favorite fruit: ");
        gets(buffer);

    }while (strcmp(fruit, buffer) != 0);
    puts("Correct Answer!");

    printf("\n-----------------------------");
    printf("\n----- strcpy & strcat -------");
    printf("\n-----------------------------");
    char str[80];
    printf("\n");    
    strcpy(str, "These ");
    strcat(str,"strings ");
    strcat(str,"are ");
    strcat(str,"concatenated. ");
    puts(str);

    printf("\n-----------------------------");
    printf("\n----- strncpy & strncat -----");
    printf("\n-----------------------------"); 
    printf("\n");
    char str1[] = "To be or not to be";
    char str2[40];
    char str3[40];
    strncpy(str2, str1, sizeof(str2));
    strncpy(str3, str2, 5);    
    str3[5] = '\0';
    puts(str1);
    puts(str2);
    puts(str3);

    char str4[40];
    char str5[40];
    printf("\n");
    strcpy(str4, "To be ");
    strcpy(str5, "or not to be");
    strncat(str4, str5, 6);
    puts(str4);
    
    printf("\n-----------------------------");
    printf("\n--------- strstr ------------");
    printf("\n-----------------------------");
    printf("\nThis is a simple string");
    char str6[] = "This is a simple string";
    char *ptr;

    ptr = strstr(str6, "simple");
    strncpy(ptr, "sample", 6);
    printf("\n%s",str6);

    printf("\n-----------------------------");
    printf("\n--------- strtok ------------");
    printf("\n-----------------------------");
    printf("\n");

    char str7[80];
    printf("Enter string: ");
    gets(str7);

    char *pch;
    pch = strtok(str7, " ,.-");
    while (pch != NULL){
        printf("%s\n", pch);
        pch = strtok(NULL, " ,.-");        
    }

    printf("\n-----------------------------");
    printf("\n----- sprintf & sscanf ------");
    printf("\n-----------------------------");
    printf("\n");
    char buffer1[50];
    int n, a=5, b=3;
    n = sprintf(buffer1,"%d plus %d is %d",a,b, a+b);
    printf("[%s] is a string and length of the string is %d", buffer1, n);

    char str8[10] = "1000";
    char str9[10] = "124.30";
    int x;
    float y;

    sscanf(str8, "%d", &x);
    sscanf(str9, "%f", &y);
    printf("\nValue of x: %d   Value of y: %.1f\n", x, y);       
    return 0;
}