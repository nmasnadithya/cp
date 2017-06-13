/*
ID: nmasnad1
PROG: combo
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;
int n;
int l11,l12,l13,l21,l22,l23;

bool chk2(int n1, int n2){
	return abs(n1-n2)<=2||abs(n1-n2)>=n-2;
}

bool chk(int n1,int n2, int n3){
	if(chk2(l11,n1))if(chk2(l12,n2))if(chk2(l13,n3)) return 1;
	if(chk2(l21,n1))if(chk2(l22,n2))if(chk2(l23,n3)) return 1;

	return 0;	
}


int main(){
	freopen("combo.in", "r", stdin);
    freopen("combo.out", "w", stdout);
	
	cin>>n;
	cin>>l11>>l12>>l13;
	cin>>l21>>l22>>l23;

	int out=0;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(chk(i,j,k))out++;
			}	
		}
	}

	cout<<out<<"\n";

	return 0;
}