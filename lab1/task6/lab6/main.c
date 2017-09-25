//
//  main.c
//  lab5
//
//  Created by Алексей Котенко on 25.09.2017.
//  Copyright © 2017 MIT Алексей Котенко. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS // scanf2
#include <stdio.h>
#include <stdlib.h> // русский язык

float PoundToKG (float pound) {
    float POUNDCOUNT, result;
    POUNDCOUNT = 405.9;
    result = pound * POUNDCOUNT / 1000;
    return result;
}

int main() {
    float pound, result;
    puts("======== Программа для пересчета веса из фунтов в килограммы========\n");
    puts("Введите количество фунтов");
    scanf("%f", &pound);
    result = PoundToKG(pound);
    printf("В киломграммах - %.2f", result);
    puts("\nПрограмма завершена\n");
}


