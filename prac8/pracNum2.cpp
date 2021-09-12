#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N,T;
    cin >> N;
    cin >> T;
    int x=0,y=0;
    int input;
    int flag = 0;

    string s;

    if(N == 0) {
        x = T;
    }

    for(int i=0; i<N; i++) {
        cin >> input;
        cin >> s;

        if(s == "right") {
            flag = 1;
        } else {
            flag = 0;
        }

        if(i==0) {
            x += input;
            continue;
        }

        if(i%2==0) {
            if(flag == 1) {
                x -= input;
            } else {
                x += input;
            }
        } else {
            if(flag == 1) {
                y -= input;
            } else {
                y += input;
            }
        }

    }

    if(flag==0) {

    } else {

    }


    cout << x << " " << y << endl;

    return 0;
}