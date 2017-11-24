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
    printf("Введите координату X Y: ");
    scanf("%f %f", &x, &y);
    
    if (x>0) {
        if (y>0) {
            printf("Координата принадлежит к 1 квадранте\n");
        }
        
        else if (y<0) {
            printf("Координата принадлежит к 4 квадранте\n");
        }
    }
    
    else if (x<0){
        if (y>0) {
            printf("Координата принадлежит к 2 квадранте\n");
        }
        
        else if (y<0) {
            printf("Координата принадлежит к 3 квадранте\n");
        }
    }
    else if (y==0 & x!=0) {
        printf("Координата лежит на оси X\n");
    }
    else if (x==0 & y==0) {
        printf("Координата находится в центре \n");
    }
    else if (x==0 & y!=0) {
        printf("Координата лежит на оси Y\n");
    }
}


