# Задача 3
y = 

i    слагаемое
1    n   * cos(    1x)
2    n-1 * cos(    2x)
3    n-2 * cos(    3x)
4    n-? * cos(    ?x)
    ..................
?    3   * cos((n-2)x)
?    2   * cos((n-1)x)
?    1   * cos((n-0)x)

# Теория

## Типы данных
python      float  double  int  string  ...
c           float  double  int  char*   ...

## Операторы
* et = `&` - лат. "и", обозначает логическое "и"
* `|` - логическое "или" 
* `x++` = `x = x+1`

## Цикл 
python   while <условие>: <действие>     for <x> in range(0, 10, 1): <действие>      for <x> in [1,2,3,7,-5]: <действие>
c        while (<условие>) {<действия>}  for (int x = 0; x < 10; x=x+1) {<действие>}

# Вычисления в цикле
```c
// Значения x, n вводится пользователем:
int x, n;
scanf("%d", &x);

// Вычисляем сумму y:
int y = 0;
for (int i = 1; i <= n; i++) {
    y = y + (n-i) * cos(i*x);
}
// Выводим результат:
printf("%d", y)

```
---

# Модули: import vs include, *.h
# Функции, подпрогаммы

---

## Модель памяти?
## Ассемблер?

> UNDEFINED BEHAVIOR
> SEGMENTATION FAILT
