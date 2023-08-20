#include<stdio.h>
void main()
{
    int sz,i,j;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&sz);
    int ar[sz];
    for(i=0;i<sz;i++){
        printf("enter the element: ");
        scanf("%d",&ar[i]);

    }
    for(j=0;j<i;j++){
        for(i=0;i<sz;i++){
            if(ar[i]==ar[j])
            printf("\n");
            else
            printf("%d",ar[i]);
        }
    }

}