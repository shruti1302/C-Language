//
//  main.c
//  ctask1
//
//  Created by Shruti Agarwal on 17/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>
int main()
{
    char name[20];
    int age;
    long int phn;
    printf("Enter your name, age and phone number: ");
    scanf("%s %d %ld", &name, &age, &phn);
    printf("\nName, age and Phone number of the user is: %s, %d & %ld ", name, age, phn);
    return 0;
}
