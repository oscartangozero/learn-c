#include <math.h>
#include <stdio.h>

#define N 3

// Задача: считать N чисел и вывести первое четное

int main() {
    int x[N]; // объявление массива (набора) чисел из N штук
    for (int i = 0; i < N-1; i++) { // в незаполненных числах - мусор
        scanf("%i", &x[i]); // получение числа с номером i
    }
    for (int i = 0; i < N+2; i++) {
        if (x[i] % 2 == 0) {
            printf("%d\n", x[i]);
            return 0;
        }
        // когда пытаемся получить больше чисел, чем объявили - ошибка:
        // *** stack smashing detected ***: terminated
        // Aborted (core dumped)
    }

}
