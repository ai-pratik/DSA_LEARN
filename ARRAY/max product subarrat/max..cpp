#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=a[0];
    int mini=a[0];// a={6, -3, -10, 0, 2}  maxi=2   mini=2    res=180   temp1=2     temp2=2
    int res=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==0){
            maxi=1;
            mini=1;
            continue;
        }
        int temp1=a[i]*maxi;
        int temp2=a[i]*mini;
        maxi=max(temp1,temp2);
        maxi=max(a[i],maxi);
        mini=min(temp1,temp2);
        mini=min(a[i],mini);

        res=max(res,maxi);
    }
    cout<<res;
}