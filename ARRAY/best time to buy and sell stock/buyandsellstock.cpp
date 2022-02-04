#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini=INT_MAX;
    int prof=0;
    int i=0;
    while(i<n){
        if(a[i]<mini){
            mini=a[i];
        }
        
        prof=max(prof,a[i]-mini);
        i++;
    }
    cout<<prof;


}