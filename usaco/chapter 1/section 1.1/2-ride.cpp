/*
ID: nmasnad1
PROG: ride
LANG: C++11
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    string line1, line2;
    cin >> line1>>line2;
    
    int val1=1,val2=1;
    for(int i=0;i<line1.length();i++)val1*=(1+line1[i]-'A');
    for(int i=0;i<line2.length();i++)val2*=(1+line2[i]-'A');
    val1%=47;
    val2%=47;
        
    if(val1==val2)cout<<"GO";
    else cout<<"STAY";
    cout<<"\n";
    



    return 0;
}

