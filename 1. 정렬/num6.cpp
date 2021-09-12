#include <iostream>
#include <algorithm>

using namespace std;

typedef struct 
{
    int time1;
    int time2;
} Position;

bool cmp(const Position& t1, const Position& t2) {
    return t1.time1 < t2.time1;
}

int main()
{

    int num;
    cin >> num;
    int sum = 0;
    Position *arr = new Position[num];

    for(int i=0; i<num; i++) {
        cin >> arr[i].time1 >> arr[i].time2;
    }

    for(int i=0; i<num-1; i++) {
        if((arr[i].time1 + arr[i].time2) < arr[i+1].time1) {
            sum = arr[i+1].time1 + arr[i+1].time2;
        } else {
            sum += arr[i+1].time2;
        }
    }

    cout << sum << '\n';

    return 0;
}