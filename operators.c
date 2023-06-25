#include <stdio.h>

int main() {
    int x = 8;
    int y = 7;

    x++;
    x += y--;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
