/*
ID: nmasnad1
PROG: friday
LANG: C++11
*/

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    
    int d[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
    
    
    
    
    int years;
    cin>>years;
    int arr[7]={0};
    int ind=0;
    for(int i=0;i<years;i++){
        int t=(((1900+i)%4==0&&(1900+i)%100>0)||(1900+i)%400==0?1:0);

        for(int j=0;j<12;j++){
            arr[ind]++;
            ind=(ind+d[t][j])%7;
            
        }
    }

    
    for(int i=0;i<7;i++)cout<<arr[i]<<(i==6?"\n": " ");
    

    
  
    
    return 0;
}

