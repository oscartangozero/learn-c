#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int factorial = 1;
    for (int mnojitel = 1; mnojitel <= N; mnojitel++) {
        factorial *= mnojitel;
    }


    // Рекуррентная формула - выражает следующее число через предыдущее:
    // A: 1 2 3 4 5 6 ...           X(n) + 1 = X(n+1)
    // B: 1 2 4 8 16 32 ...         X(n) * 2 = X(n+1)     
    // C: 1 1 2 3 5 8 13 ...   X(n) + X(n+1) = X(n+2)
    // Например, факториал:
    // 1! = 1
    // 2! = 1*2
    // 3! = 1*2*3 
    // 4! = 1*2*3*4
    // ...
    // 10! = 1 * 2 * 3 * 4 * 5 * ... * 9 * 10
    // X(n)! == x(n-1)! * n  - реккурентная формула
    
      
    printf("%d", factorial);
    // баг = bug = жук
}