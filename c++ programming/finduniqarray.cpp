#include <iostream>
using namespace std;
int main()
{
int arr[5]={18,7,18,7,4};
int i;
for(i=0;i<=4;i++)
{
   //cout<<"the array is "<<endl;
   //cin>>arr[i];
   if (arr[i]==arr[0])
   {
      cout<<"the"<<arr[i]<<endl;
      
   }else //if(arr[i]==arr[1])
   {
      cout<<"unique "<<arr[i]<<endl;
   }
  /*else if(arr[i]==arr[2])
   {
      cout<<"but"<<arr[i]<<endl;
   }
   else if(arr[i]==arr[3])
   {
      cout<<"bad"<<arr[i]<<endl;
   }
   else{
      cout<<"unique "<<arr[i]<<endl;
   }*/
   
   



}
return 0;
}
