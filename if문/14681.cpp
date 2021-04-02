#include <iostream>
using namespace std;
int main()
{
    int A;
    int B;
    cin >> A >> B;

    if (A < -1000 || A > 1000)
        return false;

    if (B < -1000 || B > 1000)
        return false;

    if (A > 0 && B > 0)
        cout << 1;
    else if (A > 0 && B < 0)
        cout << 4;
    else if (A < 0 && B > 0)
        cout << 2;
    else if (A < 0 && B < 0)
        cout << 3;
}