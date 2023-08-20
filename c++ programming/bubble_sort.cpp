#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element in array"<<endl;
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(arr[j]>arr[k])
            {
                swap(arr[j],arr[k]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"the sorted array element is ="<<arr[i]<<endl;
    }
    return 0;
}