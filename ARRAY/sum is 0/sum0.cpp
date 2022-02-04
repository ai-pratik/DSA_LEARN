#include<iostream>
#include <unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
   
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    unordered_set<int>s;
    int sum=0;
    int i=0;
    while(i<n){
        if(s.find(a[i])!=s.end()){
            cout<<"YES"<<endl;
            break;
        }
        else{
            s.insert(a[i]);
            i++;
        }
        if(i>=n){
            cout<<"NO"<<endl;

        }

    }
}