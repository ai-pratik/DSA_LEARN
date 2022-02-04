#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];//5 ==  1 2 3 4 5
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=INT_MIN;//-3476348
    int mini=INT_MAX;//245374
    for(int i=0;i<n;i++){// 1 2 3 4 5     // maxi=5    mini=1
        if(a[i]>maxi){
            maxi=a[i];
        }
        if(a[i]<mini){
            mini=a[i];
        }
    }
    cout<<maxi<<" "<<mini;
    return 0;
}