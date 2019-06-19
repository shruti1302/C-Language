//
//  main.c
//  ctask12
//
//  Created by Shruti Agarwal on 20/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>

int main()
{
    int choice=0;
    float celsius,fahrenheit;
    printf("Enter your choice: \n1. CELCIUS TO FAHRENHEIT \n2. FAHRENHEIT TO CELCIUS \n3. EXIT");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
        {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit= 1.8*celsius + 32 ;
        printf("\nThe temperatue in Fahrenheit is %f", fahrenheit);
        }
            break;
            
        case 2:
        {
            printf("\nEnter the temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius= ((fahrenheit-32)*5)/9;
            printf("\nThe temperatue in celsius is %f", celsius);
        }
            break;
            
        case 3:
            exit(0);
            break;
            
        default: printf("\nsInvalid choice");
    }
    return 0;
}
