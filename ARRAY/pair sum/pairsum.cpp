#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n;i++){
        cin>>a[i];
    }
    int count=0;
    int i=0;
    int j=n-1;
    sort(a,a+n);
    while(i<j){
        if(a[i]+a[j]==k){
            count++;
            i++;
        }
        else if(a[i]+a[j]>k){
            j--;
        }
        else if(a[i]+a[j]<k){
            i++;
        }
    }
    cout<<count;
}