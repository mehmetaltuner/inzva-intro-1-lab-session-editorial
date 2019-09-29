#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int k, q;
    cin >> q >> k;
    vector <ll> ar1(k);
    vector <ll> ar2(q);

    for(int i=0; i<k; i++) cin >> ar1[i];
    for(int i=0; i<q; i++) cin >> ar2[i];

    sort(ar1.begin(), ar1.end());

    for(int i=0; i<q; i++){
        int l=0, r=k;
        while(l+1<r){
            int mid = (l+r)/2;
            if(ar1[mid] < ar2[i]){
                l = mid;
            }else{
                r = mid;
            }
        }
        ll res = abs(ar1[l]-ar2[i]);
        if(l>0)
            res = min(res, abs(ar1[l-1]-ar2[i]));
        if(l<k)
            res = min(res, abs(ar1[l+1]-ar2[i]));
        cout << res << " ";
    }

    return 0;
}