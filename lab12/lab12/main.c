//
//  main.c
//  lab12
//
//  Created by Алексей Котенко on 23.11.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.


// LAB 12
#include <stdio.h>
#define HB 10    //размер массива

int main()
{
    int a[HB];    // массив
    int max;        //номер максимального элемента
    int i;    // индекс массива

    printf("\nВведите в одной строке %i целых чисел, и нажмите ENTER\n",HB);

    for ( i = 0; i < HB; i++ )
        scanf("%i", &a[i]);

    max=0;    //предположим, что первый элемент минимальный, сравним оставшиеся с ним

    for (i = 1; i < HB; i++ ){
        if(abs(a[i]) > abs(a[max])){
         max = i;
        }
    }

    printf("Максимальный элемент массива по модулю: a[%i]=%i \n",max+1,a[max]);
}
