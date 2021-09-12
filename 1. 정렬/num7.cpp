#include <iostream>
#include <algorithm>

using namespace std;

int cnt;

typedef struct 
{
    int x;
    int y;
}Coordinate;

bool cmpX(const Coordinate& c1, const Coordinate& c2)
{
    return c1.x < c2.x;
}

bool cmpY(const Coordinate& c1, const Coordinate& c2)
{
    return c1.y < c2.y;
}

int main()
{
    int num;
    cin >> num;
    Coordinate *arr = new Coordinate[num];

    for(int i=0; i<num; i++) {
        cin >> arr[i].x >> arr[i].y;
    }

    sort(arr, arr+num, cmpX);

    for(int i=1; i<num; i++) {
        if(i > 1) {
            if(arr[i].x == arr[i-2].x) cnt--;
        }

        if(arr[i].x == arr[i-1].x) cnt++;
    }

    sort(arr, arr+num, cmpY);

    for(int i=1; i<num; i++) {
        if(i>1) {
            if(arr[i].y == arr[i-2].y) cnt--;
        }

        if(arr[i].y == arr[i-1].y) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}