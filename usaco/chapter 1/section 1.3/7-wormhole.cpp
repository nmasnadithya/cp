/*
ID: nmasnad1
PROG: wormhole
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;
const short max_n =12;

int n, x[max_n+1], y[max_n+1];
int partner[max_n+1];
int next_on_right[max_n+1];

bool cycle_exists(){

  for (int i=1; i<=n; i++) {
    int c_pos = i;
    for (int j=0; j<n; j++)
      c_pos = next_on_right[partner[c_pos]];
    if (c_pos != 0) return 1;
  }
  return 0;
}

int solve(){

  int i, total=0;
  for (i=1; i<=n; i++) 
    if (partner[i] == 0) break;

  if (i > n) {
    if (cycle_exists()) return 1;
    return 0;
  }

  for (int j=i+1; j<=n; j++)
    if (partner[j] == 0) {
      partner[i] = j;
      partner[j] = i;
      total += solve();
      partner[i] = partner[j] = 0;
    }
  return total;
}

int main(){

	freopen("wormhole.in", "r", stdin);
	freopen("wormhole.out", "w", stdout);

  	cin >> n;
  	for (int i=1; i<=n; i++) cin >> x[i] >> y[i];
  
  	for (int i=1; i<=n; i++)
    	for (int j=1; j<=n; j++)
      		if (x[j] > x[i] && y[i] == y[j])
				if (next_on_right[i] == 0 || x[j]-x[i] < x[next_on_right[i]]-x[i])
					next_on_right[i] = j;

	cout << solve() << "\n";
  	return 0;
}