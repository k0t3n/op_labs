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
    int result = -1;
    int i,j;
    
    puts("Определить номер первого из столбцов, содержащих хотя бы один нулевой элемент");
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
    // вычисляем нулевой элемент
    while (result == -1) {
        for (j=0; j<ROW; j++) {
            for (i=0; i<COL; i++) {
                if (a[i][j] == 0) {
                    result = j;
                }
            }
        }
    }

    printf("Номер первого столбца с нулевым элементом: %i \n", result);
}




