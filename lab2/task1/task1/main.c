//
//  main.c
//  task1
//
//  Created by Алексей Котенко on 28.09.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> // русский язык

int main() {
    float MILK_COUNT, MILK_PRICE, PAPER_COUNT, PAPER_PRICE;
    
    MILK_COUNT = 12;
    MILK_PRICE = 100.63;
    
    PAPER_COUNT = 21;
    PAPER_PRICE = 50.99;
    
    puts("  Товар  |  Количество  |    Цена   ");
    puts("______________________________________");
    printf("  Молоко |      %.f      |   %.2f   \n", MILK_COUNT, MILK_PRICE);
    printf("  Бумага |      %.f      |   %.2f   \n", PAPER_COUNT, PAPER_PRICE);
    puts("______________________________________\n");
    printf(" MOLOKO %-5.0f %-5.2f \n", MILK_PRICE, MILK_COUNT);

}
