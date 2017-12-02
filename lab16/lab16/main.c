//
//  main.c
//  lab14
//
//  Created by Алексей Котенко on 24.11.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//
// Сжать массив, удалив из него все элементы, модуль которых не превышает единицу. Освободившиеся в конце массива элементы
// заполнить нулями

#include <stdio.h>
#define HB 5    //размер массива

int main()
{
    float a[HB];    // массив
    int i;    // индекс массива
    float tmp;
    int selecter;
    
    printf("\nВведите в одной строке %i чисел, и нажмите ENTER\n",HB);
    
    // Инициализация массива
    for ( i = 0; i < HB; i++ ) {
        scanf("%f", &a[i]);
    }
    
    for (i = 0; i < HB; i++ ){
        if (abs(a[i]) <= 1) {
            a[i] = 0;
        }
    }
    while (selecter == 1) {
        selecter = 0;
        for (i = 0; i < HB; i++ ){
            if (abs(a[i]) == 0 & abs(a[i -1] != 0)) {
                tmp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = tmp;
                selecter = 1;
                puts("kek");
            }
        }
    }
    
    
    for (i = 1; i <= HB; i++ ){
        printf("Значение a[%i] = %2.f \n", i, a[i]);
    }
    
    
}






