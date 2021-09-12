#include <iostream>
#include <vector>

using namespace std;

vector<int> v1;
vector<int> v2;
int x;

int main()
{
    int num1;
    cin >> num1;
    for(int i=0; i<num1; i++) {
        cin >> x;
        v1.push_back(x);
    }

    int num2;
    cin >> num2;
    int ans[num2];
    for(int i=0; i<num2; i++) {
        cin >> x;
        v2.push_back(x);
    }

    for(int i=0; i<num2; i++) {
        for(int j=0; j<num1; j++) {
            if(v2[i] == v1[j]) {
                ans[i] = 1;
                break;
            }
            ans[i] = 0;
        }
    }

    for(int i=0; i<num2; i++) {
        cout << ans[i] << '\n';
    }

    return 0;
}