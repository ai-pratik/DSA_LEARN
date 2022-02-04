#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> interval;
    int n;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        interval.push_back(make_pair(x,y));
    }
    cout<<endl;
    vector<pair<int,int>> finally;
    int j=0;
    while(j<n){
        if(interval[j].second>=interval[j+1].first && interval[j].second<=interval[j+1].second){
            finally.push_back(make_pair(interval[j].first,interval[j+1].second));
            j+=2;
        }
        else{
            finally.push_back(make_pair(interval[j].first,interval[j].second));
            j++;
        }
    }

    for(auto m :finally){
        cout<<m.first<<" "<<m.second<<endl;
    }
}