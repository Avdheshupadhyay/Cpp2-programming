#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the any number=";
    cin>>x;
    int temp;
    temp=x;
    int r;
    int sum=0;
    while(x>0)
    {
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
    }
    if(sum==temp)
    {
        cout<<"this number is palindrom:";
    }
    return 0;
}