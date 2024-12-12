#include<bits/stdc++.h> 

using namespace std;

#define ll long long
const int mod = 1e9 + 7, mx = 1e6;
ll dp[mx+1];

int main(){
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1; j<=min(6,i);j++){
            dp[i] = (dp[i] + dp[i-j])%mod;
        }
    }
    cout << dp[n] << endl;
    return 0;
}