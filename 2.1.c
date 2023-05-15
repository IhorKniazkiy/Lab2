#include <stdio.h>

int main() {
    int a, b, sum, quotient, product;//оголошення змінних

    printf("Введіть перше число: ");
    scanf("%d", &a);

    printf("Введіть друге число: ");
    scanf("%d", &b);

    sum = a + b;
    quotient = a / b;
    product = 3 * a * b;

    printf("Сума двох чисел: %d\n", sum);
    printf("Ціла частина від ділення першого на друге: %d\n", quotient);
    printf("Потроєний добуток заданих чисел: %d\n", product);//віведення змінних

    return 0;//кінець програми
}