//
//  main.c
//  lab2
//
//  Created by Алексей Котенко on 22.09.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS // scanf
#include <stdio.h>
#include <stdlib.h> // русский язык


float PurchaseCounter(int number_pencil, int number_notebook) {
    int PENCIL_PRICE, NOTEBOOK_PRICE, price;
    
    PENCIL_PRICE = 20;
    NOTEBOOK_PRICE = 40;
    
    price = (number_pencil * PENCIL_PRICE) + (number_notebook * NOTEBOOK_PRICE);
    return price;
}

int main() {
    int number_pencil, number_notebook, result;
    puts("======== Программа для рассчета стоимости покупки========\nMIT 2017, Алексей Котенко");
    puts("Введите количество карандашей (штук):");
    scanf("%i", &number_pencil);
    puts("Введите количество тетрадей (штук):");
    scanf("%i", &number_notebook);
    result = PurchaseCounter(number_pencil, number_notebook);
    printf("Общая цена - %i", result);
    puts("\nПрограмма завершена\n");
}