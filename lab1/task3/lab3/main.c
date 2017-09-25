//
//  main.c
//  lab3
//
//  Created by Алексей Котенко on 25.09.2017.
//  Copyright © 2017 MIT Алексей Котенко. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS // scanf
#include <stdio.h>
#include <stdlib.h> // русский язык

float AreaCounter (float heigh, float base) {
    float area;
    area = 0.5 * heigh * base;
    return area;
}

int main() {
    float height, base, result;
    puts("======== Программа для вычисления площади треугольника========\n");
    puts("Введите длинну основания (в см:)");
    scanf("%f", &base);
    puts("Введите длинну высоты (в см):");
    scanf("%f", &height);
    result = AreaCounter(height, base);
    printf("Площадь треугольника - %.2f", result);
    puts("\nПрограмма завершена\n");
}
