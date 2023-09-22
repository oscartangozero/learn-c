#include <math.h>
#include <stdio.h>

#define LENGTH 3

int main() {
    // с клавиатуры вводят число
    int number;
    scanf("%i", &number);

    int cifra;
    do {
        cifra = number % 10;      // получаем последнюю цифру числа
        number = number / 10;     // отбрасываем её из числа
    } while (number % 10 != 0);   // повторяем пока в числе еще есть другие цифры

    /* То же самое с циклом while:
    int cifra = number % 10;      // сохраняем последнюю цифру числа
    number = number / 10;         // отбрасываем её из числа
    while (number % 10 != 0) {    // пока в числе есть цифры повторяем:
        cifra = number % 10;      //     сохраняем последнюю цифру числа
        number = number / 10;     //     отбрасываем её из числа
    } */

    printf("%d\n", cifra);          // в итоге имеем ппервую цифру
}
