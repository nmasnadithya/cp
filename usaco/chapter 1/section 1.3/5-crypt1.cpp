/*
ID: nmasnad1
PROG: crypt1
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

bool chk[10]={0};

bool chkString(int input){
	bool r=1;

	while(input>0){
		if(!chk[input%10]){
			r=0;
			break;
		}
		input/=10;
	}
	return r;
}



int main(){
	freopen("crypt1.in", "r", stdin);
    freopen("crypt1.out", "w", stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		chk[temp]++;
	}

	int out=0;
	for(int i=111;i<=999;i++){
		for(int j=11;j<=99;j++){
			if(chkString(i))
				if(chkString(j))
					if(i*(j/10)/1000==0)
						if(i*(j%10)/1000==0)
							if(chkString(i*(j/10)))
								if(chkString(i*(j%10)))
									if(chkString(i*j))
										out++;
		}
	}


	cout<<out<<"\n";
	return 0;
}