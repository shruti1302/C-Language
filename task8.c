//
//  main.c
//  ctask8
//
//  Created by Shruti Agarwal on 18/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>
int main()
{
    int num, i=0;
    
    printf("Enter the number whose multiplication table is to be displayed: ");
    scanf("%d", &num);
    
    for( i=1; i<=10; i++)
        printf("\n%d x %d = %d", num, i, num*i);
    
    return 0;
}
