#include <iostream>

using namespace std;

int gcd(int x, int y) {
    return (y==0) ? x : gcd(y, x%y);
}

int lcm(int x, int y) {
    return x * y / gcd(x, y);
}

int main() {
    cout << "10과 20의 최소공배수&최대공약수: " << '\n';
    cout << "최소공배수: " << lcm(10, 20) << '\n';
    cout << "최대공약수: " << gcd(10, 20) << '\n';

    return 0;
}