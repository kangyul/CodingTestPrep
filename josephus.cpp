#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int index;
    cin >> index;
    int count=0;

    vector<int> vec;
    int arr[num];

    for(int i=0; i<num; i++) {
        vec.push_back(i+1);
    }

    for(int i=0; i<num; i++) {
        count += index-1;
        if(count > vec.size()-1) {
            count -= vec.size()-1;
        }
        arr[i] = vec[count];
        vec.erase(vec.begin() + count);
    }
    
    cout << "<";

    for(int i=0; i<num; i++) {
        cout << arr[i];
        if(i == num-1) break;
        cout << ", ";
    }

    cout << ">";

    return 0;
}