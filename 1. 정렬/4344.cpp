#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int numStu = 0;
    double avg[num];
    int sum=0;
    double result[num];
    int cnt=0;
    int length = 0;

    for(int i=0; i<num; i++) {
        sum = 0;
        cin >> numStu;
        int score[numStu];
        for(int j=0; j<numStu; j++) {
            int x;
            cin >> x;
            sum += x;
            score[j] = x;
        }
        avg[i] = sum / numStu;
        cnt = 0;
        
        for(int j=0; j<numStu; i++) {
            if(score[j] > avg[i]) {
                cnt++;
            }
        }
        result[i] = cnt / length;
    }

    for(int i=0; i<num; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}