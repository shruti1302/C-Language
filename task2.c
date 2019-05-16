//
//  main.c
//  ctask2
//
//  Created by Shruti Agarwal on 17/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius= ");
    scanf("%f", &celsius);
    fahrenheit= 1.8*celsius + 32 ;
    printf("The temperature in Fahrenheit is %f", fahrenheit);
    return 0;
}
