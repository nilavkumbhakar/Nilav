#include <stdio.h>
int main (void) {

    int a = 0, b = 1, c, count = 10;

    printf("%d %d",a,b);

    for (size_t i = 0; i < count; i++)
    {
        c = a + b;
        printf(" %d",c);
        a = b;
        b = c;
    }

    return 0;
    
}