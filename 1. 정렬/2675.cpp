#include <iostream>
#include <string>

using namespace std;

int N;
int cnt;

int main()
{
    cin >> N;
    string S=" ";
    

    for(int i=0; i<N; i++) {
        cin >> cnt >> S;
        for(int j=0; j<S.length(); j++) {
            for(int k=0; k<cnt; k++) {
                cout << S[j];
            }
        }
        cout << '\n';
    }



    return 0;
}