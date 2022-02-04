#include<iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n,m,o;
    cin>>n,m,o;
    int a[n],b[m],c[o];
    map<int, int> m1,m2;
    for (int i = 0; i < n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < m;i++){
        cin>>b[i];
        m1.insert({b[i],0});
    }
    for (int i = 0; i < o;i++){
        cin>>c[i];
        m2[c[i]]++;
    }
    vector<int> v;
    for (int i = 0; i <n;i++){
        if(m1.find(a[i])!=m1.end() && m2.find(a[i])!=m2.end()){
            v.push_back(a[i]);

        }
    }
    for (int i = 0; i <v.size();i++){
        cout<<v[i]<<" ";
    }

     
}
