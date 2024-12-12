#include<bits/stdc++.h> 

using namespace std;

#define ll long long

int main(){
    string s;cin >> s;
    int ans = 0, cnt = 0;
    char temp = s[0];
    for(char d: s) {
        if(d == temp) {
            cnt++;
            ans = max(ans, cnt);
        }
        else {
            cnt = 1;
            temp = d;
        }
    }
    cout << ans << endl;
    return 0;
}