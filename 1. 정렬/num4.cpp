#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr1[N], arr2[N];

    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        arr1[i] = x;
    }

    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        arr2[i] = x;
    }

    int sum=0;

    sort(arr1, arr1+N);
    sort(arr2, arr2+N);

    for(int i=0; i<N; i++) {
        sum += arr1[i] * arr2[N-i-1];
    }

    cout << sum << '\n';

    return 0;
}