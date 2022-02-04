#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for (int i = 0; i <n;i++){
        cin>>a[i];
    }
    for (int i = 0; i <m;i++){
        cin>>b[i];
    }
    int c[n+m];
    int p=n-1;
    int q=0;
    while(p>=0 && q<m){
        if(a[p]>b[q]){
            swap(a[p],b[q]);
        }
        p--;
        q++;
    }
    sort(a,a+n);
    sort(b,b+m);
    for(int i = 0; i <n;i++){
        c[i] = a[i];

    }
     for(int i = 0; i <m;i++){
        c[n+i] = b[i];
        
    }
    for(int i = 0; i <n+m;i++){
        cout<<c[i]<<" ";
    }

}