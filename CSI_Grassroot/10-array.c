#include <stdio.h>

int main() {
    int numbers[]={10,20,30,40,50};
    printf("Elements of the array are: \n");
    for(int i=0; i<5; i++) {
        printf("Element at index %d - %d\n",i,numbers[i]);
    }
    return 0;
}
