#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

multiset<int> s;
multiset<int>::iterator iter;

typedef struct 
{
    int num;
    int cnt;
} Nums;

bool cmp (const Nums& num1, const Nums& num2) {
    return num1.cnt > num2.cnt;
}

int main()
{
    int N=0, C=0;
    cin >> N >> C;
    int x=0;
    Nums *arr = new Nums[C];
    int array[C];

    for(int i=0; i<N; i++) {
        cin >> x;
        s.insert(x);
    }

    int k=0; 
    for(int i : s) {
        array[k] = i;
        k++;
    }
    
    cout << '\n';

    sort(arr, arr+C, cmp);

    for(int i=C-1; i>0; i--) {
        cout << array[i] << ' ';
    }     

    return 0;
}