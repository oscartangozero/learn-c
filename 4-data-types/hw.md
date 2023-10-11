# 1. Типы данных и их размеры 
Любое переменная хранится в памяти компьютера как набор байтов заданного размера.
Узнать сколько именно байт занимает значение переменной можно с помощью конструкции `sizeof(имя перменной)`:

```c
#include <stdio.h>

int main() {
    char c;
    unsigned char uc;
    printf("sizeof(char)=%u\n", sizeof(c));            // char = 1 символ (к кодировке ASCII) = 1 байт
    printf("sizeof(unsigned char)=%u\n", sizeof(uc));  // размер char == размер unsigned char
    return 0;
}
```

Расставьте типы в порядке увеличения размера: `float`, `char`, `long`, `short`, `int`, `long long`, `double`.

# 2. Целочисленные типы
Если тип определяет разницу между минимальным и максимальным значением, то модификтор "знаковости" определяет конкретные значения минимума и максимума:
* `unsigned` - определяет беззнаковый тип. Минимум = `0`, максимум = `2^(кол-во бит) - 1`.
* `signed` - определяет тип со знаком. Минимум = `-(2^(кол-во бит) / 2)`, максимум = `(2^(кол-во бит) / 2) - 1`.

- говорят, что **целочисленная арифметика циклическая**: 
    - при увеличении *максимума* на единицу значение становится *минимумом*
    - при уменьшении *минимума* на единицу значение становится *максимумом*  

- при сравнении знакового и беззнакового значения оба приводятся к беззнаковому:
    - положительные числа (и ноль) представляются обоими типами одинаково
    - отрицательные хранятся с помощью **метода дополнения до двух**:
      модуль отрицательного числа + беззнаковое представление этого числа = `2^(кол-во бит в беззнаковом числе)`

Все типы по умолчанию знаковые - то есть `int` это то же самое, что и `signed int`. А `short` это сокращение от `short int`. 
Напишите программу, выводящую количество секунд в тысячелетии (допустимо считать, что високосных годов нет). 
Какие типы вы использовали в программе? Являются ли какие-нибудь из них сокращениями? В таком случае замените их на полные формы и продемонстрируйте, что программа работает и выдает тот же результат.  

# 3. Дробные типы
> TODO