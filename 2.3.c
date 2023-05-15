#include <stdio.h>
#include <math.h>//підключення бібліотек
int main(){
int x, y, z;
float a;//оголошення змінних
printf("Введіть значення x:");
scanf("%d", &x);
printf("Введіть значення y:");
scanf("%d", &y);
printf("Введіть значення z:");
scanf("%d", &z);//введення значень
a = x*x+2*x*z-y*y/(sqrt(2*x)-(x*x*y));//обчислення
printf("Обчислення = %.2f \n", a);//виведення результатів
return 0;//кінець програми
}