//
//  main.c
//  lab5
//
//  Created by Алексей Котенко on 25.09.2017.
//  Copyright © 2017 MIT Алексей Котенко. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS // scanf
#include <stdio.h>
#include <stdlib.h> // русский язык

float VerstToKM (float verst) {
    float VERSTCOUNT, result;
    VERSTCOUNT = 1066.8;
    result = verst * VERSTCOUNT;
    return result;
}

int main() {
    float verst, result;
    puts("======== Программа для пересчета расстояния из верст в километры========\n");
    puts("Введите количество верст");
    scanf("%f", &verst);
    result = VerstToKM(verst);
    printf("В километрах - %.2f", result);
    puts("\nПрограмма завершена\n");
}

