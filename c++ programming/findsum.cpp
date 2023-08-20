#include <iostream>
using namespace std;
int main()
{
    int arr[4]={2,4,5,3};
    for(int i=0;i<=3;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<"this is even number in this array "<<arr[i]<<endl;
        }
        else
        {
            cout<<"this is odd number in  this array "<<arr[i]<<endl;
        }
        
        
    }
    return 0;
}