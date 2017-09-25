//
//  main.c
//  lab2
//
//  Created by Алексей Котенко on 22.09.2017.
//  Copyright © 2017 MIT Алексей Котенко. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS // scanf
#include <stdio.h>
#include <stdlib.h> // русский язык


float PurchaseCounter(int number_pencil, int number_notebook) {
    float PENCIL_PRICE, NOTEBOOK_PRICE, price;
    
    PENCIL_PRICE = 20.5;
    NOTEBOOK_PRICE = 40.6;
    
    price = (number_pencil * PENCIL_PRICE) + (number_notebook * NOTEBOOK_PRICE);
    return price;
}

int main() {
    int number_pencil, number_notebook;
    float result;
    puts("======== Программа для рассчета стоимости покупки========\n");
    puts("Введите количество карандашей (штук):");
    scanf("%i", &number_pencil);
    puts("Введите количество тетрадей (штук):");
    scanf("%i", &number_notebook);
    result = PurchaseCounter(number_pencil, number_notebook);
    printf("Общая цена - %.2f", result);
    puts("\nПрограмма завершена\n");
}
