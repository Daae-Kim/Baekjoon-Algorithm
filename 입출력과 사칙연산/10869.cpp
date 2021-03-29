#include <iostream>
using namespace std;
int main()
{
    int A, B;
    if (A < 1 || B > 10000)
        return false;

    cin >> A >> B;
    cout << A + B << endl
         << A - B << endl
         << A * B << endl
         << A / B << endl
         << A % B;
}