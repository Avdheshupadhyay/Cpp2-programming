#include <iostream>
using namespace std;
int main()
{

    int i = 0, n, start = 0, end, mid, key;
    cout << "enter the size of array =" << endl;
    cin >> n;
    int arr[n];
    start = 0;
    end = n - 1;
    mid = arr[(start + end) / 2];
    cout << "enter the key" << endl;
    cin >> key;

    for (i = 0; i <= (n-1); i++)
    {
        cout << "enter the element of array =" << endl;
        cin >> arr[i];
        if (key == mid)
        {
            cout << "the key is =" << mid<< endl;
            return n;
        }
        else if(mid<key) 
        {
            mid=arr[((start++)+end)/2];
            if(key==mid)
            {
                cout<<"the key is found"<<mid<<endl;
            }
            

        }
        
    }

    return 0;
}
