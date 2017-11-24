//
//  main.c
//  lab3
//
//  Created by Алексей Котенко on 05.10.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//

#include <stdio.h>


int main() {
    int first_var, new_first_var;
    float second_var, new_second_var, amount, subtraction, multiplication, division;
    double third_var, new_third_var;
    char str_var;
    
    // Ввод данных
    
    puts("Введите строку (char): ");
    scanf(" %c", &str_var);
    printf("str_var = %c\n", str_var);
    
    puts("Введите первое число (int): ");
    scanf("%i", &first_var);
    printf("first_var = %i\n", first_var);
    
    puts("Введите второе число (float): ");
    scanf("%f", &second_var);
    printf("second_var = %f\n", second_var);

    puts("Введите третье число (double): ");
    scanf("%lf", &third_var);
    printf("third_var = %lf\n", third_var);
    
    // Проверка введенных данных
    
    if (first_var && second_var && third_var && str_var) {
        puts("Все переменные введены");
    }
    
    
    
    // Вывод всех данных
    
    printf("Выведем все переменные: first_var - %.i, second_var - %.2f, third_var - %.lf, fourth_var - %.c\n", first_var, second_var, third_var, str_var);
    
    // Сложение/вычитание/умножение/деление
    
    amount = (float) first_var + second_var + (float) third_var;
    subtraction = (float) first_var - second_var - (float) third_var;
    multiplication = (float) first_var * second_var * (float) third_var;
    division = (float) first_var / second_var;
    printf("Сумма - %.2f\n Разность - %.2f\n Деление - %.2f\n Умножение - %.2f\n", amount, subtraction, multiplication, division);
    
    // Инкремент/дискремент
    
    new_first_var = first_var++;
    new_second_var = second_var--;
    new_third_var = third_var++;
    
    printf("Прибавим 1 к первой и третьей переменной, из второй вычтем. Результат: first_var - %.i, second_var - %.2f, third_var - %.lf, fourth_var - %.c\n", first_var, second_var, third_var, str_var);
    
    
    // Сравнение чисел
    
    
//    if ((float) first_var >= (float) second_var) {
//        puts("Первое число больше или равно второму");
//    }
//    else
//        puts("Первое число меньше второго");
    
    (float) first_var >= (float) second_var ? puts("Первое число больше или равно второму") : puts("Первое число меньше второго");
    
    if ((float) second_var >= (float) third_var) {
        puts("Второе число больше или равно третьему");
    }
    else
        puts("Второе число меньше третьего");
    
    
}
