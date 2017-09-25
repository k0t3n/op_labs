//
//  main.c
//  lab1
//
//  Created by Алексей Котенко on 22.09.2017.
//  Copyright © 2017 MIT Алексей Котенко. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS // scanf
#include <stdio.h>
#include <stdlib.h> // русский язык


float CylinderArea(float s, float h) {
    float v;
    v = s * h;
    return v;
}

int main() {
    float s, h, result;
    puts("======== Программа для рассчета объема цилиндра\nMIT 2017, Алексей Котенко");
    puts("Введите площадь основания цининдра:");
    scanf("%f", &s);     // Ввод площади основания
    puts("Введите высоту цининдра:");
    scanf("%f", &h);     // Ввод высоты
    result = CylinderArea(s, h);
    printf("Объем цилиндра = %.2f", result);
    puts("\nПрограмма завершена\n");
}


