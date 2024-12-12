#include<bits/stdc++.h> 

using namespace std;

#define ll long long
const int mod = 1e9 + 7;
const int mx = 1e3;
ll dp[mx + 1][mx+1];
int n;
char s[mx+1][mx+1];

int main(){
    dp[0][0] = 1;
    cin >> n;
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> s[i][j];
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            if(s[i][j] == '*') dp[i][j] = 0;
            if(i && s[i][j] == '.') dp[i][j] += dp[i-1][j];
            if(j && s[i][j] == '.') dp[i][j] += dp[i][j-1];
            dp[i][j] %= mod;
        }
    }
    cout << dp[n-1][n-1];
    return 0;
}