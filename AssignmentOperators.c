#include <stdio.h>

int main() {
    int x = 2;
  
    x += 1;  // 3
    x -= 1;  // 2
    x *= 3;  // 6
    x /= 2;  // 3
    x %= 2;  // 1
    x += 3 * 2;  // 7
    
    printf("%d", x);

    return 0;
}
