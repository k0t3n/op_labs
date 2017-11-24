//
//  main.c
//  lab14
//
//  Created by Алексей Котенко on 24.11.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//

#include <stdio.h>
#define HB 5    //размер массива

int main()
{
    int a[HB];    // массив
    int b[HB];    // массив
    int i;    // индекс массива
    int g = 1;

    printf("\nВведите в одной строке %i чисел, и нажмите ENTER\n",HB);

    // Инициализация массива
    for ( i = 0; i < HB; i++ ) {
        scanf("%i", &a[i]);
    }

    for (i = 0; i < HB; i++ ){
        if (a[i] > 0){
            b[g] = a[i];
            g++;
        }
    }

    for (i = 1; i < g; i++ ){
        printf("Значение b[%i] = %i \n", i, b[i]);
    }

}




