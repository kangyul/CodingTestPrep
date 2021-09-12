#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin >> N;
	int x=0;
	
	for(int i=0; i<N; i++) {
		cin >> x;
		if(x != 0) {
			pq.push(x);
			continue;
		}
		
		if(!pq.empty()) {
			cout << pq.top() << '\n';
			pq.pop();
		} else {
			cout << "0" << '\n';
		}
	}
	
	return 0;
}