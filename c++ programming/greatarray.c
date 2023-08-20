#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array=");
    scanf("%d",&n);
    int arr[n];
    int crr[n];
    int i,j;
     
     //for(i=0;i<=3;i++)
     //{
        for(j=0;j<n;j++)
       {
        printf("enter the array element of first array=");
        scanf("%d",&arr[j]);
        printf("enter the second array elment=");
        scanf("%d",&crr[j]);
            if(arr[j]>crr[j])
            {
                printf("this is greater array=%d\n",arr[j]);
            }
            else if(crr[j]>arr[j])
            {
                printf("it is greater =%d\n",crr[j]);
            }
            else
            {
                printf("this is equal\n");
            }
       }
        
     }
     
