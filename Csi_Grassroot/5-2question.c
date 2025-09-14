#include <stdio.h>
int main(){
    //variable declaration
    float cel,far;

    //main code
    printf("Enter the temperature in celcius; ");
    scanf("%f", &cel);

    // Formula: F = (C*9/5)+32

    far = (cel*9/5)+32;

    printf("Temperature in fahrenheit; %.2f\n", far);

    return 0;
}