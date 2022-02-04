//Reverse an array or string
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[] = {12, 34, 45, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array\n";
    print(arr, n);

    cout << "\nAfter Reverse Array\n";
    reverse(arr, 0, n - 1);
    print(arr, n);
    ;
}