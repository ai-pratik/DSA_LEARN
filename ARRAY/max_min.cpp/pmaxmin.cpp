#include<iostream>
using namespace std;

int Maxnum(int arr[],int n){
    int maxi= INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int Minnum(int arr[],int n){
    int mini= INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}


int main(){
    int n;
    cin>>n;
    int arr[100];

    for (int i = 0; i <n;i++){
        cin>>arr[i];
    }
    
    
    cout<<Maxnum(arr,n)<<endl;
    cout<<Minnum(arr,n)<<endl;

}