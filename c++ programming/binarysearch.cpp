#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<" enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    for(int j=0;j<=(n-1);j++)
    {
      cout<<"enter the element of array "<<endl;
      cin>>arr[j];
    }
    
  int start=0;
    int end=(n-1);
     int key;
     cout<<"enter the key for binary search "<<endl;
     cin>>key;
    int mid=arr[(start+end)/2];
    int i;
    
    for(i=0;i<=(n-1);i++)
    {
       // cout<<"the array is "<<mid<<endl;
        if(key==mid)
        {
          cout<<"the key is found"<<mid<<endl;
        }
        else if(key<mid)
        {
          cout<<"this is increasing programme so please enter the other value"<<endl;
        }
        else if(key>mid)
        {
          mid=arr[((start+1)+end)/2];
          //cout<<"the update mid is "<<mid<<endl;
          if(mid==key)
          {
            cout<<"the key found "<<mid<<endl;
            return n;
          }
          else if(key>mid)
          {
        
          mid=arr[((start+2)+end)/2];
          cout<<"the second update mid is "<<mid<<endl;
          if(key==mid)
          {
            cout<<"the key found "<<mid<<endl;
            return n;


          }
          else if(key>mid)
          {
            mid=arr[((start+3)+end)/2];
            cout<<"the third update mid is "<<mid<<endl;
           if(mid==key)
            cout<<"the finanlly key is found "<<mid<<endl;
            return n;
          }
          }
        
        }
        

        
    }
  
}