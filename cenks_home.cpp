#include <bits/stdc++.h>
#define lim1 1e6
#define lim2 1e9

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    
    int n;
    ll c;
    cin >> n >> c;
    
    assert(n<=lim1);
    assert(n>=1);
    assert(c<=lim2);
    assert(c>=1);
    
    vector <int> monster(n);
    
    for(int i=0; i<n; i++){
        cin >> monster[i];
        assert(monster[i]<=lim2);
        assert(monster[i]>=1);
    }
    
    sort(monster.begin(), monster.end());

    for(int i=0; i<n; i++){
        c -= monster[i];
        if(c <= 0){
            cout << i+1;
            return 0;
        }
    }

    
    cout << "EV";

    return 0;
}