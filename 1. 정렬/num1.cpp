#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    for(int i=0; i<num; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }

    sort(arr, arr+num);

    for(int i=0; i<num; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}