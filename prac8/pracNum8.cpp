#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int num = 0;
    cin >> num;
    vector<int> v;
    int arr[num];

    for(int i=0; i<num; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int index = num/2;

    arr[index] = v[num-1];

    int adder = 1;
    for(int i=1; i<num; i++) {
        adder *= -1; 
        index = index + i * adder;
        arr[index] = v[num-i-1];
    }

    for(int i=0; i<num; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}