//
//  main.c
//  lab9
//
//  Created by Алексей Котенко on 02.11.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//

#include <stdio.h>
#include<math.h>

int main() {
    float y, x, x_min=1, x_max=2, delta=0.025;
    
    printf("Реализация с циклом while\n");
    x = x_min;
    while (x < x_max) {
        y = sqrt(4*powf(x, 2) + 3*x - 1) + exp(2*x);
        printf("При x=%4.2f y=%4.2f \n", x, y);
        x = x + delta;
    }
    
    printf("Реализация с циклом for\n");
    for (x = x_min; x < x_max; x = x + delta) {
        y = sqrt(4*powf(x, 2) + 3*x - 1) + exp(2*x);
        printf("При x=%4.2f y=%4.2f \n", x, y);
    }
    
    return 0;
}
