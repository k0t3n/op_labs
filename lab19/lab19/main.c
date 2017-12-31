//
//  main.c
//  lab19
//
//  Created by Алексей Котенко on 14.12.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//
// 60) Каждый третий элемент в массиве заменить полусуммой двух предыдущих, а стоящий перед ним - полусуммой соседних с ним элементов.

#include <stdio.h>
#define HB 7    //размер массива

int main()
{
    float a[HB];    // массив
    int i;    // индекс массива
    float summ;
    int count = 0;
    
    printf("\nВведите в одной строке %i чисел, и нажмите ENTER\n",HB);
    
    // Инициализация массива
    for ( i = 0; i < HB; i++ ) {
        scanf("%f", &a[i]);
    }
    
    for (i = 3; i + 3 < HB; i = i + 3 ){
        a[i] = (a[i-1] + a[i-2]) / 2;
        a[i+1] = (a[i] + a[i+2]) / 2;
    }
    
    for (i = 0; i < HB; i++) {
        printf("%.1f \n", a[i]);
    }
    
    
    
}






