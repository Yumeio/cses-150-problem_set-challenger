#include<bits/stdc++.h> 

using namespace std;
#define ll long long 
const int mod = 1e9 + 7, mx = 1e6;
ll dp[mx + 1];
int coins[mx+1];
int n, x;

int main(){
    cin >> n >> x;
    for(int i = 1; i <= n;i++){
        cin >> coins[i - 1];
    }
    dp[0] = 1;
    for(int j = 0 ; j < n;j++){
        for(int i = 1; i <= x;i++){
            if(coins[j] <= i){
                dp[i] = (dp[i] + dp[i - coins[j]]) % mod;
            }
        }
    }
    cout << dp[x];
    return 0;
}