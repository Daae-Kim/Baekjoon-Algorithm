#include <iostream>
using namespace std;
int main()
{
    int A;
    int B;
    cin >> A;

    if (A < 0)
        return false;

    cin >> B;
    if (B > 10)
        return false;
    int answer = A + B;
    cout << answer;
}
