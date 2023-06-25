#include <stdio.h>

int main() {
    int x, y, z;
    
    z = 3;
    x = z--;  /* assign 3 to x, then decrement z to 2 */
    printf("x=%d \n", x);
    
    y = 3;
    x = ++y;  /* increment y to 4, then assign 4 to x */
    
    printf("x=%d \n", x);
    
    printf("y=%d \n", y);

    return 0;
}
