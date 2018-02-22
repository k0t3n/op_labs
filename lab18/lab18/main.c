//
//  main.c
//  lab18
//
//  Created by Алексей Котенко on 08.02.2018.
//  Copyright © 2018 Алексей Котенко. All rights reserved.
//

#include <stdio.h>
#define ROW 3 //кол-во строк
#define COL 3 //кол-во столбцов

int main() {
    int a[ROW][COL];    //массив
    int sum[ROW];    //максимальные элементы
    int k_sum;
    int i,j;
    
    puts("Вычисляем сумму положительных элементов по строкам");
    puts("Вводите массив построчно");
    for (i=0; i<ROW ;i++)
    {
        for(j=0; j<COL; j++)
            scanf("%i",&a[i][j]);
    }
    
    puts("Введенный массив");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            printf("%i",a[i][j]);
        printf("\n");
    }
    // вычисляем сумму строк
    for(i=0; i<ROW; i++){
        k_sum = 0;
        
        for(j=0; j<COL; j++){
            if (a[i][j] > 0){
                k_sum += a[i][j];
            }
        }
        sum[i] = k_sum;
        printf("\n");
    }
     // выводим суммы строк
    puts("Выводим сумму положительных элементов строки");
    for(i=0; i<ROW; i++){
        printf("Строка %i: %i", i+1, sum[i]);
        printf("\n");
    }
    
    return 0;
}

