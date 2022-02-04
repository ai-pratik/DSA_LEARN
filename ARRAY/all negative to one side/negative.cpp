//move all neagative to one side of the array
#include <iostream>
using namespace std;
void negative_first(int a[], int n)
{
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        if (a[l] < 0 && a[h] < 0)
        {
            l++;
        }
        else if (a[l] < 0 && a[h] >= 0)
        {
            l++;
            h--;
        }
        else if (a[l] >= 0 && a[h] >= 0)
        {
            l++;
            h--;
        }
        else if (a[l] >= 0 && a[h] < 0)
        {
            swap(a[l], a[h]);
            l++;
            h--;
        }
    }
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    negative_first(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}