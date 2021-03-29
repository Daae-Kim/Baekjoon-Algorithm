#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A > 2 || B, C > 10000)
        return false;

    cout << (A + B) % C << endl
         << ((A % C) + (B % C)) % C
         << endl
         << (A * B) % C << endl
         << ((A % C) * (B % C)) % C;
}