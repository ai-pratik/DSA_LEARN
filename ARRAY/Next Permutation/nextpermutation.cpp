#include<iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i =0;i<n;i++){
        cin>>a[i];
    }
    int j=n-2,k=n-1;
    while (j>=0 && a[j]>=a[j+1])
    {
        j--;
    }
    if(j==-1){
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

    }
    else{
        while(a[k]<=a[j]){
            k--;
        }

        swap(a[j],a[k]);
        reverse(a+j+1,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }


    }
}