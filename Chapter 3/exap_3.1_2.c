#include <stdio.h>

int main () {
    int num1,num2;
    char ch1;

    printf("Do you want to\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    ch1= getchar();
    printf("\n");

    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);

    if(ch1 == '1') printf("%d", num1+num2);
    if(ch1 == '2') printf("%d", num1-num2);
    if(ch1 == '3') printf("%d", num1*num2);
    if(ch1 == '4' && num2) printf("%d", num1/num2);

    return 0;
}
