//
//  main.c
//  ctask3
//
//  Created by Shruti Agarwal on 17/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sum, avg;
    printf("Enter marks in 1st, 2nd and 3rd Subject: ");
    scanf("%f%f%f", &sub1,&sub2,&sub3);
    sum=sub1+sub2+sub3;
    avg=sum/3;
    printf("\nSum and Average is %f and %f", sum, avg);
    return 0;
}
