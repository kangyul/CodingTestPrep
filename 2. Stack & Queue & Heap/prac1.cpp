#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
stack<int> st;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin >> N;
	int x=0;
	int cnt=1;
	int max=0;
	  
	for(int i=0; i<N; i++) {
		cin >> x;
		st.push(x);
	}
	
	max = st.top();
	st.pop();
	
	for(int i=0; i<N-1; i++) {
		if(st.top() > max) {
			cnt++;
			max = st.top();
			st.pop();
		} else {
			st.pop();
		}
	}
	
	cout << cnt << '\n';
	
	return 0;
}