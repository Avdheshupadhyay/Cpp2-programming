#include <iostream>
using namespace std;
int main()
{
  int arr[4] = {23, 4, 7, 67};
  int crr[4] = {45, 6, 87, 56};
  int sum[4];
  int k;

  for (k = 0; k <= 3; k++)
  {
    sum[k] = arr[k] + crr[k];

    cout << "the sum of two array " << sum[k] << endl;
  }

  return 0;
}