#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int sum2=0;
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n+1;i++) {
        cin>>a[i];
        sum2+=a[i];
        sum+=i;
    }
    cout<<sum2-sum;

}