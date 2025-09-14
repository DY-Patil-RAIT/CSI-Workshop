#include <stdio.h>
int main() {
    char ans;
    printf("2 + 2 = ?\n");
    printf("a, 4\n");
    printf("b, 2\n");
    printf("c, -10\n");
    printf("Enter your answer: ");
    scanf("%c", &ans);

    switch (ans) {
        case 'a':
            printf("Your answer is right\n");
            break;
        case 'b' :
            printf("Your ansewer is wrong\n");
            break;
        case 'c' :
            printf("Your answer is wrong\n");
            break;
        default:
            printf("Please enter a right option\n");
    }

    return 0;
}
