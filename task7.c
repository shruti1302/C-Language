//
//  main.c
//  ctask7
//
//  Created by Shruti Agarwal on 18/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i=0, length=0, j=0, flag;
    char data[20];
    
    printf("Enter the string: ");
    gets(data);
    
    //Length of String
    for(i=0 ; data[i]!='\0' ; i++)
        length++;
    printf("\nThe length of string is %d", length);
    
    //Check Palindrome
    for (j=0; j<=(length/2); j++)
    {
        if (data[j] == data[length-1-j])
            flag=1;
        else flag=0;
    }
    
    if (flag == 1)
        printf("\nThe given string is a Palindrome");
    else printf("\nThe given string is not a Palindrome");

    return 0;
}
