#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    int cnt = 0;

    for(int i=0; i<num; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }

    for(int i=0; i<num; i++) {
        if(arr[i] < 2) {
            cnt++;
            continue;
        }

        for(int j=2; j<arr[i]/2+1; j++) {
            if(arr[i] % j == 0) {
                cnt++;
                break;
            }
        }
    }

    cout << num-cnt << '\n';

    return 0;
}