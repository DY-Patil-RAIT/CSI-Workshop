#include <stdio.h>

int main() {
    float a;
    float b;
    char operators;
    printf("Enter operation: \n1 for +\n2 for -\n3 for *\n4 for /\n: ");
    scanf("%c",&operators);
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter another number: ");
    scanf("%f",&b);
    switch(operators) {
        case '1':
            printf("Addition of the numbers is: %.2f\n", a+b);
            break;
        case '2':
            printf("Substraction of the numbers is: %.2f\n", a-b);
            break;
        case '3':
            printf("Multiplication of the numbers is: %.2f\n", a*b);
            break;
        case '4':
            if (b!=0) {
                printf("Division of the numbers is: %.2f\n", a/b);
            }
            else {
                printf("The Second Number is Invalid!");
            }
                break;
        default:
            printf("Sorry i dun understand what you mean?");
            break;
    }
    return 0;
}