/*
ID: nmasnad1
PROG: beads
LANG: C++11
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    freopen("beads.in", "r", stdin);
    freopen("beads.out", "w", stdout);

    int n;
    cin>>n;
    string necklace="";
    cin>>necklace;
    necklace += necklace;
    //cout<<necklace.length();

    int ans=0;

    bool col1 = 0, col2 = 0;
    int sw = 0, c1 = 0, mw = 0, c2 = 0, ew = 0;
    char curr = 0;
    for (int i = 0; i < necklace.length(); i++) {
        if (necklace[i] == 'w') {
            if (!col1)sw++;
            else if (!col2)mw++;
            else ew++;
        } else if (necklace[i] == curr) {
            if (col2) {
                c2 += ew + 1;
                ew = 0;
            } else {
                c1 += mw + 1;
                mw = 0;
            }
        } else {
            if (col2) {
                curr = necklace[i];
                ans = max(ans, sw + c1 + mw + c2 + ew);
                sw = mw;
                c1 = c2;
                mw = ew;
                c2 = 1;
                ew = 0;

            } else if (col1) {
                c2++;
                col2 = 1;
                curr = necklace[i];
            }
            else {
                curr = necklace[i];
                col1 = 1;
                c1++;
            }

        }
    }

    ans=max(ans, sw + c1 + mw + c2 + ew);
    cout<<(ans>n?n:ans)<<"\n";




    return 0;
}

