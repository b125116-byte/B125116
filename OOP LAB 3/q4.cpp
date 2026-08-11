#include <iostream>
using namespace std;

int main(){

    int n;
     cout << "Enter no of elements:";
     cin >> n;

     float *arr = new float[n];
     float sum = 0;

     cout << " Enter " << n << " Elements: ";

     for(int i = 0; i < n; i++)
     {
        cin >> arr[i];
        sum += arr[i];
     }

     float avg = sum / n;

     cout << "Sum = " << sum << endl;
     cout << "Average = " << avg << endl;

     delete[] arr;

     return 0;


}