#include<bits/stdc++.h> 

using namespace std;

#define ll long long
const int mod = 1e9 + 7;
const int mx = 1e6;
ll dp[mx+1], coins[mx+1];
int n, x;

int main(){
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    for (int i = 1; i <= x;i++) {
        dp[i] = 1e9;
        for(int j = 0; j < n ;j++) {
            if(coins[j] <= i) {
                dp[i] = (dp[i] + dp[i - coins[j]])% mod;
            }
        }
    }
    if(dp[x] == 1e9) {
        cout << -1 << endl;
        return 0;
    }
    cout << dp[x] << endl;
    return 0;
}