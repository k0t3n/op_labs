//
//  main.c
//  lab19
//
//  Created by Алексей Котенко on 08.02.2018.
//  Copyright © 2018 Алексей Котенко. All rights reserved.
//

#include <stdio.h>
#define ROW 3 //кол-во строк
#define COL 3 //кол-во столбцов

int main() {
    int a[ROW][COL];    // массив
    int col_max, i_col_max;
    int col_min, i_col_min;
    int buffer;
    int i,j;
    
    puts("Вычисляем минимум/максимум строки и меняем их местами");
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
    // вычисляем максимум и минимум
    for(i=0; i<ROW; i++){
        col_max = a[i][0];
        col_min = a[i][0];
        i_col_min = 0;
        i_col_max = 0;
        for(j=1; j<COL; j++){
            if (a[i][j] > col_max) {
                col_max = a[i][j];
                i_col_max = j;
            }
            else if (a[i][j] < col_min){
                col_min = a[i][j];
                i_col_min = j;
            }
        }
        // меняем местами
        buffer = col_min;
        a[i][i_col_min] = col_max;
        a[i][i_col_max] = buffer;
    }
    // выводим новый массив
    puts("Новый массив");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            printf("%i",a[i][j]);
        printf("\n");
    }
    return 0;
}


