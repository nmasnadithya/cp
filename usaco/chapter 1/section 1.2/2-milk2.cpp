/*
ID: nmasnad1
PROG: milk2
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);

    
    int n;
    cin>>n;
    
    vector<pair<int,int>> arr;
    
    for(int i=0;i<n;i++){
        int n1,n2;
        cin>>n1>>n2;
        arr.push_back({n1,n2});
    }
    sort(arr.begin(),arr.end());
    
    int cm=0,nm=0;
    int start=-1,end=-1;
    
    
    for(auto q:arr){
        
        
        if(start>0)nm=max(nm,q.first-end);

        if(q.first>=start&&q.first<=end)end=max(end,q.second);
        else {
            
            start=q.first;
            end=q.second;
        }
        cm=max(end-start,cm);
        
        
    }
    
    cout<<cm<<" "<<nm<<"\n";
    
    return 0;
}

