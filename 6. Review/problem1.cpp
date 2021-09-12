// 1. 큰 수 A+B

#include <bits/stdc++.h>

using namespace std;

int main(void) {

    string s1, s2;
    cin >> s1 >> s2;

    int length = (s1.length() >= s2.length()) ? s1.length() : s2.length();
    vector<int> vec(length+1, 0);

    for(int i=0; i<s1.length(); i++) {
        vec[i] = s1[s1.length()-i-1] - '0';
    }

    for(int i=0; i<s2.length(); i++) {
        vec[i] += s2[s2.length()-i-1] - '0';
    }

    for(int i=0; i<length; i++) {
        if(vec[i] >= 10) {
            vec[i] -= 10;
            vec[i+1]++;
        }
    }

    reverse(vec.begin(), vec.end());

    if(vec[0] == 0) {
        vec.erase(vec.begin(), vec.begin()+1);
    }

    for(int i=0; i<vec.size(); i++) {
        cout << vec[i];
    }

    return 0;
}