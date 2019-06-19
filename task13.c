//
//  main.c
//  ctask13
//
//  Created by Shruti Agarwal on 19/05/19.
//  Copyright © 2019 Shruti Agarwal. All rights reserved.
//

#include <stdio.h>
int main()
{
    int arr[50],i, small, large, n;
    
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    
    printf("\nEnter the elements");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    small=arr[0];
    large=arr[0];
    
    for(i=0;i<n;i++)
    {  if (arr[i]<small)
            small=arr[i];
    }
    printf("\nThe smallest element is %d", small);
    
    for(i=0;i<n;i++)
    {  if (arr[i]>large)
        large=arr[i];
    }
    printf("\nThe largest element is %d", large);
    
    return 0;
    
}
