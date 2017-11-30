//
//  main.c
//  lab14
//
//  Created by Алексей Котенко on 24.11.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//
// Упорядочить элементы массива по возрастанию.

#include <stdio.h>
#define HB 7    //размер массива

int main()
{
    float a[HB];    // массив
    int i, j;    // индекс массива
    int g;
    
    printf("\nВведите в одной строке %i чисел, и нажмите ENTER\n",HB);
    
    // Инициализация массива
    for ( i = 0; i < HB; i++ ) {
        scanf("%f", &a[i]);
    }
    
    for(i = 0 ; i < HB; i++) {
        // сравниваем два соседних элемента.
        for(j = 0 ; j < HB - i; j++) {
            if(a[j] > a[j+1]) {
                // если они идут в неправильном порядке, то
                //  меняем их местами.
                int tmp = a[j];
                a[j] = a[j+1] ;
                a[j+1] = tmp;
            }
        }
    }
    
    for (i = 1; i <= HB; i++ ){
        printf("Значение a[%i] = %2.f \n", i, a[i]);
    }

    
}







