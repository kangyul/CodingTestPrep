#include <iostream>
#include <string>
#include <stack>

using namespace std;
stack<char> st;

int main() 
{
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++) {
        if(i == 0) {
            st.push(s[i]);
            continue;
        }
        if(st.top() == '(' && s[i] == ')') {
            st.pop();
        } else {
            st.push(s[i]);
        } 
    }  

    cout << st.size() << '\n'; 
 
    return 0;
}