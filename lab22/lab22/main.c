//
//  main.c
//  lab20
//
//  Created by Алексей Котенко on 15.02.2018.
//  Copyright © 2018 Алексей Котенко. All rights reserved.
//

#include <stdio.h>
#define ROW 3 //кол-во строк
#define COL 3 //кол-во столбцов

int main() {
    int a[ROW][COL];    // массив
    int col_max, i_col_max;
    int count = 0;
    int buffer;
    int i,j;
    
    puts("Находим в каждой строке наибольший элемент и меняем его местами с элементом главной диагонали");
    puts("Вводите массив построчно");
    for (i=0; i<ROW ;i++)
    {
        for(j=0; j<COL; j++)
            scanf("%i",&a[i][j]);
    }
    
    puts("Введенный массив");
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++)
            printf("%i",a[i][j]);
        printf("\n");
    }
    // вычисляем максимум и минимум
    for(i=0; i<ROW; i++){
        col_max = a[i][0];
        i_col_max = 0;
        
        for(j=1; j<COL; j++){
            if (a[i][j] > col_max) {
                col_max = a[i][j];
                i_col_max = j;
            }
        }
        // меняем местами
        buffer = a[i][count];
        a[i][count] = col_max;
        a[i][i_col_max] = buffer;
        count++;
    }
    // выводим новый массив
    puts("Новый массив");
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++)
            printf("%i",a[i][j]);
        printf("\n");
    }
    return 0;
}




