/*
ID: nmasnad1
PROG: transform
LANG: C++11
*/

#include <bits/stdc++.h>
#include <locale>

using namespace std;

/*
 * 
 */

int n;

bool fgrid(int o,vector<string> g1,vector<string> g2){

    if(o<5||o==6)for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            switch(o){
                case 1:
                    if(g1[i][j]!=g2[j][n-(i+1)])
                        return 0;
                    break;
                case 2:
                    if(g1[i][j]!=g2[n-(i+1)][n-(j+1)])
                        return 0;
                    break;
                case 3:
                    if(g1[i][j]!=g2[n-(j+1)][i])
                        return 0;
                    break;
                case 4:
                    if(g1[i][j]!=g2[i][n-(j+1)])
                        return 0;
                    break;
                case 6:
                    
                    if(g1[i][j]!=g2[i][j])
                        return 0;
                    break;
                    
                    
                    
                    
            }
                    
        }
    }
    else{
            for(int i=0;i<n;i++)reverse(g1[i].begin(),g1[i].end());
            bool ans=0;
            for(int i=1;i<=3;i++)ans=max(ans,fgrid(i,g1,g2));
            return ans;
    }
        \

    return 1;
}


int main(int argc, char** argv) {
    freopen("transform.in", "r", stdin);
    freopen("transform.out", "w", stdout);
  
  

    

    cin>>n;
    vector<string> g1,g2;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        g1.push_back(tmp);
    }
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        g2.push_back(tmp);
    }
    
    int ans=7;
    for(int i=1;i<7;i++){
        if(fgrid(i,g1,g2)){
            ans=i;
            break;
        }
    }
    
    cout<<ans<<"\n";
    
    return 0;
}

