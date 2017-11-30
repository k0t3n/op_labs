//
//  main.c
//  lab13
//
//  Created by Алексей Котенко on 24.11.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
// Сумму модулей элементов массива, расположенных после первого положительного элемента.

#include <stdio.h>
#define HB 5    //размер массива

int main()
{
    int a[HB];    // массив
    int summ = 0;        //номер максимального элемента
    int i;    // индекс массива
    int switcher = 0;

    printf("\nВведите в одной строке %i чисел, и нажмите ENTER\n",HB);

    // Инициализация массива
    for ( i = 0; i < HB; i++ )
        scanf("%i", &a[i]);

    for (i = 1; i < HB; i++ ){
        if (switcher == 1) {
            summ += abs(a[i]);
        }
        if (a[i] > 0 && switcher == 0) {
            summ += abs(a[i]);
            switcher = 1;
        }
    }

    printf("Сумма - %i\n", summ);
}
