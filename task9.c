//
//  main.c
//  ctask9
//
//  Created by Shruti Agarwal on 18/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>
int main()
{
    int num=0, fact=1, i;
    
    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d", &num);
    
    for (i=num; i>0; i--)
        fact=fact*i;
    
    printf("The factorial of the number is %d", fact);
    
    return 0;
    
}
