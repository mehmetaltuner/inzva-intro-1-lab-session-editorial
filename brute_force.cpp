#include <bits/stdc++.h>
using namespace std;
#define int long long 

int res;
int n;
vector <int> ar(21);

void rec(int i, int sofar, int taken){
    if(i == n){
        if(taken>0LL)
            res  = min(res, abs(sofar));
        return;
    }
    
    rec(i+1, sofar+ar[i], taken+1);
    rec(i+1, sofar, taken);
}

signed main() {
    ios_base::sync_with_stdio(0);
    res = LLONG_MAX;
    cin >> n;
    for(int i=0; i<n; i++) cin >> ar[i];
    rec(0, 0, 0);
    cout << res;
    return 0;
}
