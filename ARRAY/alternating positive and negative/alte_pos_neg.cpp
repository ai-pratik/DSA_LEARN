#include<iostream>
using namespace std;
void rotate(int a[],int st,int en){
    int temp=a[en];
    for (int i=en-1;i>=st;i--){
        a[i+1]=a[i];
    }
    a[st]=temp;

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i;i<=n;i++){
        cin>>a[i];
    }
    int i=0,j=0,k=0;
    while(i<n && j<n && k<n){
        if(k%2==0){
        if(a[k]>=0){
            i=k;
            j=k;
            while(i<n && a[i]>=0){
                i++;
            }
            if(i>=n){
                break;
            }
            rotate(a,j,i);
        }
        }
        else{
            if(a[k]<0){
                i=k;
                j=k;
                while(j<n && a[j]<0){
                    j++;
                }
                if(j>=n){
                    break;
                }
                rotate(a,i,j);
            }
        }
        k++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}