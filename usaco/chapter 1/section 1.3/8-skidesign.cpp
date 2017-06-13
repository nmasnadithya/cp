/*
ID: nmasnad1
PROG: skidesign
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("skidesign.in", "r", stdin);
    freopen("skidesign.out", "w", stdout);
	
	int n;
	cin>>n;

	vector<int> hills(n);
	for(int i=0;i<n;i++)cin>>hills[i];


	int min_cost=1<<30;

	for(int i=0;i<=83;i++){
		int c_cost=0;
		for(int j=0;j<n;j++){
			if(hills[j]<i)c_cost+=(i-hills[j])*(i-hills[j]);
			else if(hills[j]>i+17)c_cost+=(hills[j]-(i+17))*(hills[j]-(i+17));
		}
		min_cost=min(min_cost,c_cost);
	}

	cout<<min_cost<<"\n";

	return 0;
}