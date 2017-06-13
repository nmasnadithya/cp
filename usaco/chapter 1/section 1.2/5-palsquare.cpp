/*
ID: nmasnad1
PROG: palsquare
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

bool chkPalindrome(string input){

	bool out=input==string(input.rbegin(), input.rend());
	return out;
}

string baseConvert(int number,int base){
	string proc="";

	while(number>0){
		proc+=(number%base>9?('A'-10)+number%base:'0'+number%base);
		number/=base;
	}
	return string(proc.rbegin(), proc.rend());
}


int main(){
	freopen("palsquare.in", "r", stdin);
    freopen("palsquare.out", "w", stdout);

	int base;
	cin>>base;
	for(int i=1;i<=300;i++){
		if(chkPalindrome(baseConvert(i*i,base)))cout<<baseConvert(i,base)<<" "<<baseConvert(i*i,base)<<"\n";
	}



	return 0;
}