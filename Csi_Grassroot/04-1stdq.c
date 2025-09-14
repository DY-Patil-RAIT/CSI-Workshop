#include <stdio.h>

int main(){
    char name[50];
    int age;
    float GPA;

    printf("Enter Name: ");
    scanf("%s",&name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter GPA: ");
    scanf("%f", &GPA);

    printf("\nHello %s, you are %d years old and your GPA is %.2f\n",name,age,GPA);


    return 0;
}