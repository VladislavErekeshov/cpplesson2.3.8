#include <iostream>
using namespace std;
int main()
{
    int a, a1, a2, a3, b, b1, b2, b3, c, c1, c2, c3;
    cin >> a >> b >> c;
    a1 = a / 1000 % 10;
    a2 = a / 100 % 10;
    a3 = a / 10 % 10;
    b1 = b / 1000 % 10;
    b2 = b / 100 % 10;
    b3 = b / 10 % 10;
    c1 = c / 1000 % 10;
    c2 = c / 100 % 10;
    c3 = c / 10 % 10;
    cout << a1 * 100 + a2 * 10 + a3 << " " << b1 * 100 + b2 * 10 + b3 << " " << c1 * 100 + c2 * 10 + c3;
    return 0;
}