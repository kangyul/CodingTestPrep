#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int arr1[100], arr2[100], sum[100];

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int length = (str1.length() > str2.length()) ? str1.length() : str2.length();

    // step1
    // for(int i=str1.length()-1; i>=0; i--) {
    //     arr1[length-i-1] = str1[i]-'0';
    // }

    // step1-2
    reverse(str1.begin(), str1.end());

    for(int i=0; i<str1.length(); i++) {
        arr1[i] = str1[i];
    }

    for(int i=0; i<str1.length(); i++) {
        arr1[i] -= '0';
    }

    

    for(int i=str2.length()-1; i>=0; i--) {
        arr2[length-i-1] = str2[i]-'0';
    }

    for(int i=0; i<length+1; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // step2
    for(int i=0; i<length+1; i++) {
        if(sum[i] > 9) {
            sum[i] -= 10;
            sum[i+1]++;
        }
    }

    int sumLength = 0;

    for(int i=length+1; i>=0; i--) {
        if(sum[i] != 0) {
            sumLength = i+1;
            break;
        }
    }

    // step3
    reverse(sum, sum+sumLength);

    // step4
    for(int i=0; i<sumLength; i++) {
        cout << sum[i];
    }

    return 0;
}