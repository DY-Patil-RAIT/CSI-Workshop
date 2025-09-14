#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Grassroots";
    char str2[20] = " Workshop";
    strcat(str1, str2);
    printf("Concatenate String: %s\n", str1);
    return 0;
}
