//
//  main.c
//  ctask4
//
//  Created by Shruti Agarwal on 17/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>
int main() {
    char firstname[15], lastname[15];
    printf("Enter your first name: ");
    gets(firstname);
    printf("\nEnter your last name: ");
    gets(lastname);
    printf("\nFull name is %s %s", firstname, lastname);
    return 0;

}
