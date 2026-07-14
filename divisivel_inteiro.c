#include <stdio.h>

int main() {
    int n = 1, div = 1;

    while(n > 0) {

        if(n % 1 == 0 && n % 2 == 0 && n % 3 == 0 &&
        n % 4 == 0 && n % 5 == 0 && n % 6 == 0 &&
        n % 7 == 0 && n % 8 == 0 && n % 9 == 0 && n % 10 == 0)
            break;
            
        n++;
    }
    
    printf("%d é o número divisivel de 1 a 10", n);
}