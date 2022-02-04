#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count = 0;
    int j=0;
    while(j<n-1)
    {
        j=j+a[j];
        count++;
    }
    cout<<count;
    
}