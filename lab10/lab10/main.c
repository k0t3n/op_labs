//
//  main.c
//  lab10
//
//  Created by Алексей Котенко on 09.11.2017.
//  Copyright © 2017 Алексей Котенко. All rights reserved.
//

#include <stdio.h>

int main() {
    int category, car, cont=0, choice;
    float total_price=0;
    puts("Добро пожаловать в автосалон!");
    do {
        puts("Введите интересующую вас категорию:\n1 - Внедорожники\n2 - Спорткары\n3 - Хетчбеки\n");
        scanf("%i", &category);
        
        switch (category) {
            case 1:
                puts("Введите интересующую вас модель:");
                puts("1 - Land Rover Sport - 34 999\n2 - Toyota Land Cruiser - 29 999\n3 - Ford F150 15 000\n");
                scanf("%i", &car);
                switch (car) {
                    case 1:
                        total_price += 34999;
                        puts("Отличный выбор!");
                        break;
                        
                    case 2:
                        total_price = total_price + 29999.00;
                        puts("Отличный выбор!");
                        break;
                        
                    case 3:
                        total_price += 15000;
                        puts("Отличный выбор!");
                        break;
                        
                    default:
                        puts("Неверный номер автомобиля");
                        break;
                }
                break;
                
            case 2:
                puts("Введите интересующую вас модель:");
                puts("1 - Porche 911 - 55 999\n2 - Lamborghini Gallardo - 65 999\n3 - Nissan GTR - 35 000\n");
                scanf("%i", &car);
                switch (car) {
                    case 1:
                        total_price += 55999;
                        puts("Отличный выбор!");
                        break;
                        
                    case 2:
                        total_price += 65999;
                        puts("Отличный выбор!");
                        break;
                        
                    case 3:
                        total_price += 35000;
                        puts("Отличный выбор!");
                        break;
                        
                    default:
                        puts("Неверный номер автомобиля");
                        break;
                }
                break;
                
            case 3:
                puts("Введите интересующую вас модель:");
                puts("1 - Kia Rio - 16 999\n2 - Ford Focus - 65 999\n3 - Opel Astra - 18 999\n");
                scanf("%i", &car);
                switch (car) {
                    case 1:
                        total_price += 16999;
                        puts("Отличный выбор!");
                        break;
                        
                    case 2:
                        total_price += 65999;
                        puts("Отличный выбор!");
                        break;
                        
                    case 3:
                        total_price += 18999;
                        puts("Отличный выбор!");
                        break;
                        
                    default:
                        puts("Неверный номер автомобиля");
                        break;
                }
                break;
                
                
            default:
                puts("Неверный номер категории.");
                break;
        }
        printf("Обшая сумма покупок: %.2f\n\n", total_price);
        puts("Хотите продолжить покупки?\n1 - да\n0 - нет\n");
        scanf("%i", &choice);
        switch (choice) {
            case 0:
                printf("Итоговая цена: %.2f\n\n", total_price);
                puts("Спасибо за покупки. Приходите ещё!");
                cont = 1;
                break;
                
            case 1:
                puts("Продолжаем покупки");
                category = 0;
                
        }
    }
    while (cont != 1);
    
    return 0;
}
