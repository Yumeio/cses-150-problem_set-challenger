#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n; ll s = 0;
    cin >> n;
    for(int i = 1 ; i < n ;i++) {
        ll a;
        cin >> a;
        s+= a;
    }
    cout << n * (n + 1) / 2 - s;
    return 0;
}