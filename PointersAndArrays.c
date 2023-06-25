/*
An important concept with arrays is that an array name acts as a pointer to the first element of the array. Therefore, the statement ptr = a can be thought of as ptr = &a[0].

Consider the following statement, which prints the first element of the array: printf("%d ", *a);


*/
#include <stdio.h>

int main() {
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i;
    
    ptr = a;
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
}
