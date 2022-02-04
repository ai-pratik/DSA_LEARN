#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> a;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        int b;
        cin>>s;
        cin>>b;
        a.insert({s,b});
    }
    map<string,int>:: iterator it;
    for(it=a.begin();it!=a.end();it++){
        cout<<(*it).first<<": "<<(*it).second<<endl;
    }
    
}