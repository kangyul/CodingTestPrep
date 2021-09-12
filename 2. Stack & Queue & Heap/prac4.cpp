#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack<int> st;
stack<int> spareSt;
vector<char> v;

int main()
{
    int N;
    cin >> N;
    int num=0;

    for(int i=N; i>0; i--) {
        spareSt.push(i);
    }

    for(int i=0; i<N; i++) {
        int x;
        cin >> x;

        if(i == 0) {
            for(int j=0; j<x; j++) {
                v.push_back('+');
                num = spareSt.top();
                st.push(j);
                spareSt.pop();
            }
            v.push_back('-');
            continue;
        }

        if(x < st.top()) {
            cout << "NO" << '\n';
            return 0;
        } else if (x == st.top()) {
            v.push_back('-');
            st.pop();
        } else {
            while (1)
            {
                v.push_back('+');
                num = spareSt.top();
                st.push(num);
                spareSt.pop();

                if(x == st.top()) {
                    v.push_back('-');
                    st.pop();
                    break;
                }
            }
            
        }
    }

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << '\n';
    }

    return 0;
}