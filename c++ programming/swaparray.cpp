#include <iostream>
using namespace std;
int main()
{
    int arr[3]={4,7,6};
    int i;
    
     int start=arr[0];
     int end=arr[2];
    for(i=0;i<=2;i++)
   {
       // cout<<"this is array "<<arr[i]<<endl;
       start=start^end;
       end=end^start;
       start=start^end;
       //cout<<"the"<<(start,end)<<endl;
        cout<<"this is swap array "<<arr[i]<<endl;


    }
    return 0;

}