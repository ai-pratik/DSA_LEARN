#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

     for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    int i=0;
    int j=0;
    int count=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            count++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<count;
}