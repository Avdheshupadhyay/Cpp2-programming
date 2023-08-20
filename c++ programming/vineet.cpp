#include <iostream>
using namespace std;
int main()
{
    
    int num1,num2,result,x;
   // char='p';
   cout<<"enter the first number ="<<endl;
    cin>>num1;
    cout<<"enter the second number ="<<endl;
    cin>>num2;
    
            
     cout<<"enter the any operater ="<<endl;
     cin>>x;

    if(x==1)
    {
         result=num1+num2;
         cout<<"the sum of two number is ="<<result<<endl;
    }
    else if(x==2)
    {
        result=num1-num2;
        cout<<"the substract of two number ="<<result<<endl;
    }
    else if(x==3)
    {
        result=num1*num2;
        cout<<"the multiply of two number is ="<<result<<endl;
    }
    else if(x==4)
    {
        result=num1/num2;
        cout<<"the divide of two number is ="<<result<<endl;
    }


    return 0;
}