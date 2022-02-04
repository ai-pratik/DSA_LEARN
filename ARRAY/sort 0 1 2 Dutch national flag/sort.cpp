#include <iostream>
using namespace std;

void national_flag(int low, int mid, int high, int a[])
{
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else if (a[mid] == 2)
        {
            swap(a[high], a[mid]);
            high--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0, mid = 0, high = n - 1;
    national_flag(low, mid, high, a);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
