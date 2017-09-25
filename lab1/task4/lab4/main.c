//
//  main.c
//  lab4
//
//  Created by Алексей Котенко on 25.09.2017.
//  Copyright © 2017 MIT Алексей Котенко. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS // scanf
#include <stdio.h>
#include <stdlib.h> // русский язык

float TripCounter (float distance, float petrolPer100) {
    float result, PETROLPRICE;
    PETROLPRICE = 45.23;
    result = (((distance * 2) / 100) * petrolPer100) * PETROLPRICE;
    return result;
}

int main() {
    float distance, result, petrolPer100;
    puts("======== Программа для вычисления стоимости поездки на автомобиле========\n");
    puts("Введите дистанцию: (в км)");
    scanf("%f", &distance);
    puts("Введите расход бензина на 100 км (в литрах):");
    scanf("%f", &petrolPer100);
    
    result = TripCounter(distance, petrolPer100);
    printf("Стоимость поездки - %.2f", result);
    puts("\nПрограмма завершена\n");
}

