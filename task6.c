//
//  main.c
//  ctask6
//
//  Created by Shruti Agarwal on 18/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>
#include<math.h>

int main()
{
    int n=0, count=0, rem=0, sum=0, num=0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    num=n;
    
    //Counting the number of digits
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("\nNumber of digits: %d", count);
    num=n;
    
    //Summing
    while(num!=0)
    {
        rem = num%10;
        sum= sum + pow(rem, count);
        num=num/10;
    }
    
    //Testing
    if(sum == n)
    {
        printf("\nThe given number is an Armstrong number.");
    }
    else printf("\nThe number is not an Armstrong number.");
    
    return 0;
}
