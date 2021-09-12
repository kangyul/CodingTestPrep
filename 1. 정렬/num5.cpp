#include <iostream>
#include <algorithm>

using namespace std;

int arr1[8];
int arr2[5];
int arr3[8];

int main()
{
    for(int i=0; i<8; i++) {
        int x;
        cin >> x;
        arr1[i] = x;
        arr3[i] = x;
    }

    sort(arr1, arr1+8);

    int sum=0;
    for(int i=3; i<8; i++) {
        arr2[i-3] = arr1[i];
        sum += arr1[i];
    }

    cout << sum << '\n';

    for(int i=0; i<8; i++) {
        for(int j=0; j<5; j++) {
            if(arr3[i] == arr2[j]) {
                cout << (i+1) << " ";
                break;
            }
        }
    }

    return 0;
}