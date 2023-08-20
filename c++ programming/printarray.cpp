#include <iostream>
using namespace std;
int main()
{
    int arr[4]={2,2,5,7};
    for(int i=0;i<=3;i++)
    {
       // cout<<"the array is "<<arr[i]<<endl;
        
        if(arr[i]!=&arr[i])
        {
            cout<<"the array is "<<arr[i]<<endl;
        }
        else
        {
            cout<<"the"<<arr[i]<<endl;
        }


    }
}