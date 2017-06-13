/*
ID: nmasnad1
PROG: barn1
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("barn1.in", "r", stdin);
    freopen("barn1.out", "w", stdout);
	int m,s,c;
	cin>>m>>s>>c;
	vector<int> data;
	for(int i=0;i<c;i++){
		int inp;
		cin>>inp;
		data.push_back(inp);
	}
	sort(data.begin(),data.end());
	vector<int> spaces;
	for(int i=1;i<c;i++){
		if(data[i]-data[i-1]>1)spaces.push_back((data[i]-data[i-1])-1);
	}
	sort(spaces.rbegin(),spaces.rend());
	int remove=0;
	for(int i=0;i<m-1&&i<spaces.size();i++)remove+=spaces[i];
		cout<<(((s-data[0])-(s-data[c-1]))-remove)+1<<"\n";
	return 0;
}