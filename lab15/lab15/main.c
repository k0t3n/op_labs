//
//  main.c
//  lab14
//
//  Created by Алексей Котенко on 24.11.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//
// Вычислить сумму и количество элементов массива X, удовлетворяющих условию 0≤Xi≤1

#include <stdio.h>
#define HB 5    //размер массива

int main()
{
    float a[HB];    // массив
    int i;    // индекс массива
    float summ = 0.0;
    int count = 0;
    
    printf("\nВведите в одной строке %i чисел, и нажмите ENTER\n",HB);
    
    // Инициализация массива
    for ( i = 0; i < HB; i++ ) {
        scanf("%f", &a[i]);
    }
    
    for (i = 0; i < HB; i++ ){
        if (0 <= a[i] & a[i] <= 1) {
            count += 1;
            summ += a[i];
        }
    }
    
    printf("\nКоличество - %i\nСумма - %.2f\n",  count, summ);
    
}





