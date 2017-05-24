/*
ID: nmasnad1
PROG: gift1
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    
    unordered_map<string,int> values;
    vector<string> namelist;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        values[name]=0;
        namelist.push_back(name);
    }
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        int val, num,valg;
        cin>>val>>num;
        if(num==0)continue;
        valg=val/num;
        values[name]-=valg*num;
        for(int j=0;j<num;j++){
            cin>>name;
            values[name]+=valg;
        }
        
    }
    
    for(auto x:namelist){
        cout<<x<<" "<<values[x]<<"\n";
    }
    
  
    
    return 0;
}

