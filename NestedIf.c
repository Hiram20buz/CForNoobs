#include <stdio.h>

int main() {
    int profit = 500;
    int clients = 12;
    int bonus = 0;
    
    if (profit > 1000) {
        if (clients > 15){
            bonus = 100;
        }
            
    }
    
    else{
        bonus = 25;
    }
        
    
    printf("%d", bonus);
}
