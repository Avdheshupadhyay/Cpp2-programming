#include <iostream>
using namespace std;
int binary(int n, int arr[n])
{
    int key=4;
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2 ;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            cout << "the key is found:" << endl;
            return mid;
        }
        else if (key < arr[mid])
        {
        start = mid + 1;
        }
        else if (key > arr[mid])
        {
        end = mid - 1;
        }
        else
        {
        return -1;
        }
       
                mid = (start + end) / 2;
    }
}
int main()
{
    int n;
    cout << "enter the size of array=";
            cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element=";
                cin>>arr[i];
                }

        int key;
        cout << "enter the key=";
        cin >> key;
        cout << "the index is=" << binary(n, arr[n]);
         return 0;
    }
