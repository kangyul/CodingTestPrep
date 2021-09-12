#include <bits/stdc++.h>

using namespace std;

int N;
int mem[100004];

const int inf  = 1e9 + 7;

int dp(int x) {

    if(x == 1) return 0;
    if(mem[x] != 0) return mem[x];

    int a = (x%3==0) ? dp(x/3) : inf;
    int b = (x%2==0) ? dp(x/2) : inf;
    int c = dp(x-1);
    
    mem[x] = min({a, b, c}) + 1; 

    return mem[x];
}

int main(void) {
    cin >> N;

    cout << dp(N) << '\n';

    return 0;
}