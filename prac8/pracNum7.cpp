#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    int sum = 0;
    sum += vec[0] * vec[n-1];
    sum += vec[1] * vec[n-2];
    

    return 0;
}