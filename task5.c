//
//  main.c
//  ctask5
//
//  Created by Shruti Agarwal on 18/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>

int main()
{
    int num=0, revnum=0, sum=0;
    
    printf("Enter the number to be reversed: ");
    scanf("%d", &num);
    
    while (num!=0)
    {
        revnum= num % 10;
        sum= sum*10 + revnum;
        num= num/10;
    }
    
    printf("\nThe reversed number is %d", sum);
    
    return 0;
    
}


