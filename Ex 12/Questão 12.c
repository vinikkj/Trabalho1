#include <stdio.h>

int main() {
    int a = 70;
    int b = 7;
    int i;
    for (i = 0; i <= 100; i++) {
        printf("%d +\n%d\n\n", a, b);
        a--;
        b+= 7;
    }
    
    return 0;
}
