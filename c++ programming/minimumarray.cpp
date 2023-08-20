#include <iostream>
using namespace std;
int main()
{



int bus[8];
int seat;
for(int i=0;i<=7;i++)
{
    cout<<"enter the seat size in foot ";
    cin>>bus[i];
    seat=min(bus[i],seat);
    
}
cout<<"the small size seat in this bus "<<seat<<endl;
return 0;
}
