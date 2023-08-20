#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array=";
    cin>>n;
     char arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element in array=";
        scanf("%s",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<"the name of candidate="<<i <<arr[i]<<endl;
    }
   
    return 0;
}