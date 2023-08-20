#include<iostream>
#include<string>
using namespace std;
void call()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cout<<"enter the mobile number="<<endl;
        cin>>arr[i];
    }
    cout<<"calling the number :"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
}
void spotify()
{
    cout<<"please choose your favorite singer"<<endl;
    cout<<"arjit singh , rahat fateh ali khan , jubin nautiyal , neha kakkar"<<endl;
    char song[50];
    cout<<"search your favorite song"<<endl;
    cin>>song[50];
    cout<<"your song is playing:"<<endl;
}
int main()
{
   char x;
   cout<<"search your app"<<endl;
   cin>>x;
   if(x==1)
   {
     spotify();
   }
   else if(x==2)
   {
    call();
   }
   else
   {
     cout<<"something went wrong :"<<endl;
   }
    return 0;
}