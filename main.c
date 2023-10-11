#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int f = 1;  // факториал = 1*2*3*...*(N-1)*N
    for (int n = 1; n <= N; n++) { // множитель от 1 до N
        f *= n;
    }
      
    printf("%d\n", f);
}