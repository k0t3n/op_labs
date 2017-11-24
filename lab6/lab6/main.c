//
//  main.c
//  lab3
//
//  Created by Алексей Котенко on 17.10.2017.
//  Copyright © 2017 MIT Алексей Котенко. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> // русский язык

int main() {
    int a, b, c;
    puts("======== Программа для выполнения побитовых операций========\n");
    puts("Введите 2 числа в десятеричной системе");
    scanf("%i%i", &a, &b);
    puts("Введите значение сдвига");
    scanf("%i", &c);
    printf("a>>%i это %i\n", c, a >> c);
    printf("b<<%i это %i", c, b << c);
    printf("%i & %i = %i\n", a, b, a & b);
    printf("%i | %i = %i\n", a, b, a | b);
    printf("%i ^ %i = %i\n", a, b, a ^ b);
    puts("\nПрограмма завершена\n");
    return 1;
}

