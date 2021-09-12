#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

vector<int> s1;
set<int> s2;
vector<int> v;

int main() 
{
	
	int A, B;
	cin >> A >> B;
	int x=0;
	
	for(int i=0; i<A; i++) {
		cin >> x;
		s1.push_back(x);
	}
	
	for(int i=0; i<B; i++) {
		cin >> x;
		s2.insert(x);
	}
	
	for(int num : s1) {
		if(s2.find(num) == s2.end()) {
			v.push_back(num);
		}
	}
	
	sort(v.begin(), v.end());
	
	cout << v.size() << '\n';
	for(int i : v) {
		cout << i << ' ';
	}
	
	return 0;
}