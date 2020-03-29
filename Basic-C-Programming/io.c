#include <stdio.h>

int main(){
    char ch = 'a';
    char str[7] = "abcdef";
    float real = 12.34;
    int number = 100;
    double dlb = 12.345678;    
    
    printf("\n");
    printf("Charatcter: %c\n",ch);
    printf("Charatcter in integer: %d\n",ch);
    printf("String: %s\n",str);
    printf("Float: %f\n",real);    
    printf("Double: %lf\n",dlb);
    printf("Scientific(e): %e\n",dlb);
    printf("Scientific(E): %E\n",dlb);
    printf("Integer: %d\n",number);
    printf("Octal: %o\n",number);
    printf("Hexadecimal: %x",number);
    printf("\n");

    printf("\n");
    printf("Enter number,real,str: ");
    scanf("%d%f%s",&number,&real,str);
    printf("%d\t%f\t%s",number,real,str);
    printf("\n");

    int day, month, year, age;
    printf("\n");
    printf("Enter day-month-year: ");
    scanf("%d-%d-%d",&day, &month, &year);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Entered Date: %d\/%d\/%d\n",day, month, year);
    printf("Entered Age plus 10 years: %d",age+10);
    printf("\n");

    return 0;
}