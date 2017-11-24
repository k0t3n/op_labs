//
//  main.c
//  lab7
//
//  Created by Алексей Котенко on 19.10.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{  float x,y;
    printf("Введите значение х:");
    scanf("%f",&x);
    if (x<0) {
        y = abs(x) + log(pow(x, 2) + 1);
        printf("Выполнилось первое условие\n");
    }
    else if (x>0) {
        y = pow(M_E, pow(x, 3)) - (cos(x)/sin(x));
        printf("Выполнилось второе условие\n");
    }
    else {
        y = 1.3 * pow(10, -5);
        printf("Выполнилось третье условие\n");
    }
    printf("y=%7f\n",y);
}

