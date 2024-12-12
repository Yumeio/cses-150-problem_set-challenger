#include<bits/stdc++.h> 

using namespace std;

#define ll long long
const int mod = 1e9 + 7;
const int mx = 1e6;
ll dp[mx+1];
int n, x;
int coins[mx+1];

int main(){
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    dp[0] = 1;
    for(int i = 1; i <= x;i++){
        for(int j = 0; j < n;j++){
            if(coins[j] <=i) {
                dp[i] = (dp[i] + dp[i - coins[j]]) % mod;
            }
        }
    }
    cout << dp[x] << endl;
    return 0;
}