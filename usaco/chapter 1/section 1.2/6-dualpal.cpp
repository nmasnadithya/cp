/*
ID: nmasnad1
PROG: dualpal
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;


bool chkPali(string input){

	return input==string(input.rbegin(),input.rend());

}

string baseConv(int input,int base){
	string out="";
	while(input>0){
		out+=input%base;
		input/=base;
	}
	return string(out.rbegin(),out.rend());
}

int main(){
	freopen("dualpal.in", "r", stdin);
    freopen("dualpal.out", "w", stdout);
	
	int n,s;
	cin>>n>>s;
	s++;

	for(int i=0;i<n;s++){
		int pali=0;
		for(int j=2;j<=10;j++){
			if(chkPali(baseConv(s,j)))pali++;
			if(pali>1){
				cout<<s<<"\n";
				i++;
				break;
			}
		}

	}


	return 0;
}
