#include <iostream>
using  namespace std;
int main()
{
    int arr[4]={3,6,8,7};
    int dr;
    for (int i=0;i<=3;i++)
    {
       // cout<<"the array is "<<arr[i]<<endl;
    
        dr=max(arr[i],dr);
    }
        cout<<"the maximumum value is "<<dr<<endl;
        
    
    return 0; 

}