#include <stdio.h>
void namaste();
void bonjour();
int main() {
    char ch;
    printf("Enter H if your speak Hindi or F if you speak French: ");
    scanf("%c",&ch);
    if (ch == 'H') {
        namaste();
    }
    else if (ch == 'F') {
        bonjour();
    }
    else {
        printf("Please enter H or F");
    }
    return 0;
}
void namaste() {
    printf("Namaste\n");
}
void bonjour() {
    printf("Bonjour\n");
}
