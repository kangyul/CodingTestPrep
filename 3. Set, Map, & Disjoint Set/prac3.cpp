#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

set<string> s;

int main() 
{
	
	int A, B;
	cin >> A >> B;
	string x=" ";
	int cnt=0;
	
	for(int i=0; i<A; i++) {
		cin >> x;
		s.insert(x);
	}

	for(int i=0; i<B; i++) {
		cin >> x;
		if(s.find(x) != s.end()) {
			cnt++;
		}
	}

	cout << cnt << '\n';
		
	return 0;
}