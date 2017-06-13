/*
ID: nmasnad1
PROG: milk
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("milk.in", "r", stdin);
    freopen("milk.out", "w", stdout);
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> data;
    for(int i=0;i<m;i++){
    	pair<int,int> temp;
    	cin>>temp.first>>temp.second;
    	data.push_back(temp);
    }

    sort(data.begin(),data.end());

    int cost=0,f=0;

    while(n>0){
    	if(n-data[f].second>=0){
    		cost+=data[f].first*data[f].second;
    		n-=data[f].second;
    	}
    	else if(n-data[f].second<0){
    		cost+=n*data[f].first;
    		n=0;

    	}


    	f++;
    	
    }
	
cout<<cost<<"\n";

	return 0;
}