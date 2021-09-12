#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    cout << fixed << setprecision(0) << num * 0.78<< " " << num * 0.956 << endl;
    
    return 0;
}