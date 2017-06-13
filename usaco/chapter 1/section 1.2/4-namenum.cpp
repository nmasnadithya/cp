/*
ID: nmasnad1
PROG: namenum
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;


char getVal(char inp){
	if(inp>='A'&&inp<='C')return '2';
	else if(inp>='D'&&inp<='F') return '3';
	else if(inp>='G'&&inp<='I') return '4';
	else if(inp>='J'&&inp<='L') return '5';
	else if(inp>='M'&&inp<='O') return '6';
	else if(inp>='P'&&inp<='S') return '7';
	else if(inp>='T'&&inp<='V') return '8';
	else if(inp>='W'&&inp<='Y') return '9';
}

string getNum(string input){
	string out="";
	for(int i=0;i<input.length();i++)out+=getVal(input[i]);
	return out;
}

int main(){
	//freopen("namenum.in", "r", stdin);
    //freopen("namenum.out", "w", stdout);

    string input;
    cin>>input;

    ifstream fin ("dict.txt");
    bool f=0;
    while(true){
    	string inString;
    	
    	fin>>inString;
    	if(input==getNum(inString)){
    		cout<<inString<<"\n";
    		f=1;
    	}
    	if(fin.eof())break;
    }
    if(!f)cout<<"NONE\n";
	
	return 0;
}