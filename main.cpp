#include <iostream>
using namespace std;

int toGray(int n)
{
    // Base case
    if (n < 10)
        return n;

    int last = n % 10;          // آخر رقم
    int prev = (n / 10) % 10;   // الرقم اللي قبله
    
    int grayBit = last ^ prev;  // XOR

    return toGray(n / 10) * 10 + grayBit;
}

int main()
{
    int binary;
    cin >> binary;

    cout << toGray(binary);

    return 0;
}