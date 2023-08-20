#include <iostream>
using namespace std;
int main()
{
    int arr[4]={2,4,6,7};
    int start,end;
    start=arr[0];
    end=arr[3];
        start=start^end;
        end=end^start;
        start=start^end;
        for(int i=0;i<=3;i++)
        {
            

       cout<<"the swap array "<<(start,end)<<endl;
      }
    
    return 0;
}