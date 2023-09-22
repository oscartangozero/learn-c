#include <stdio.h>
#include <math.h> // для доступа к cos()

int main() {
    int x;
    // scanf("%i", &x); // i == int == d == decimal
    // scanf("%lf", &x); // lf == long float == double
    x = cos(1.0/2.0);
    printf("%d", x);
    return 0;
}