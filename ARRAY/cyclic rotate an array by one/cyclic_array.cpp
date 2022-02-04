//cyclic rotate an array by one
#include<iostream>
using namespace std;

void Cyclic_rotate(int a[],int n)
{
    int i=0;
    int j=n-1;
    while(i!=j)
    {
        swap(a[i],a[j]);
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Cyclic_rotate(a,n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}