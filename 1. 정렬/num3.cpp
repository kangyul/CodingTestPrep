#include <iostream>
#include <algorithm>

using namespace std;

typedef struct 
{
    int x;
    int y;
} Position;

bool cmp(const Position& p1, const Position& p2) 
{
    if(p1.y == p2.y) {
        return p1.x < p2.x;
    } else {
        return p1.y < p2.y;
    }
}


int main()
{
    int num;
    cin >> num;
    Position *arr = new Position[num];

    for(int i=0; i<num; i++) {
        cin >> arr[i].x >> arr[i].y;
    }

    sort(arr, arr+num, cmp);

    for(int i=0; i<num; i++) {
        cout << arr[i].x << ' ' << arr[i].y << '\n';
    }

    return 0;
}