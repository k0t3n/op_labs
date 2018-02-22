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
    int summ[ROW];
    int buffer;
    int i,j, g;
    
    puts("Отсортировать по убыванию строки по сумме её отрицательных четных элементов");
    puts("Вводите массив построчно");
    for (i=0; i<ROW ;i++)
    {
        for(j=0; j<COL; j++)
            scanf("%i",&a[i][j]);
    }
    
    puts("Введенный массив");
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++)
            printf("%i ",a[i][j]);
        printf("\n");
    }
    
    // обнуляй
    for(i=0; i<ROW; i++){
        summ[i] = 0;
    }
    // вычисляем максимум и минимум
    for(i=0; i<ROW; i++){
        for (j=0; j<COL; j++) {
            if (a[i][j] < 0 && a[i][j] % 2 == 0) {
                summ[i] = summ[i] + a[i][j];
            }
        }
    }
    
    for(i = 0 ; i < ROW - 2; i++) {
        for(j = 0 ; j < ROW - 1; j++) {
            if(summ[j] > summ[j+1]) {
                int tmp = summ[j];
                summ[j] = summ[j+1];
                summ[j+1] = tmp;
                for (g = 0; g < ROW ; g++) {
                    buffer = a[j][g];
                    a[j][g] = a[j+1][g];
                    a[j+1][g] = buffer;
                }
            }
           
        }
    }
    puts("____________");
    puts("Отсортированный массив");
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++)
            printf("%i ",a[i][j]);
        printf("\n");
    }
    
    
    return 0;
}





