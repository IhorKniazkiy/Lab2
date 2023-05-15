#include <stdio.h>//підключення бібліотек

int main() {
    int a, b, sum, quotient;//оголошення змінних
    
    printf("Введіть два цілих числа: ");
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    quotient = a / b;
    
    printf("Сума двох чисел: %d\n", sum);
    printf("Ціла частина від ділення %d на %d: %d\n", a, b, quotient);//виведення результатів 
    
    return 0;// кінець програми 
}