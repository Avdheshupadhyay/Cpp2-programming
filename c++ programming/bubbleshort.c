#include<stdio.h>
//using namespace std;
int main()
{
     int arr[4]={2,6,3,0};
     int temp;
     int start=arr[0];
     int end=arr[3];
    for (  int i = 0; i < 4; i++)
    {
        if(start>start++)
        {
            temp=start;
            start=start++;
            start++=temp;
        }
        else if((start++)>(end--))
        {
            temp=start+1;
            start+1=end--;
              (end--)=temp;
              printf("the swap array is =",arr[i]);

           // cout<<"the swap array is="<<arr[i]<<endl;
            

        }
    }
    
    return 0;
}