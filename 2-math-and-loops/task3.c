#include <math.h>
#include <stdio.h>

int main() {
    // Значения x, n вводится пользователем:
    int n = 100;
    double x;
    scanf("%lf", &x);

    // Вычисляем сумму y:
    double y = 0;
    for (int i = 1; i <= n; i++) {
        y += (n - i - 1) * cos(x * i);
    }
    // Выводим результат:
    printf("%lf\n", y);
    return 0;
}
