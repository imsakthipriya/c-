#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << "(a+b)^2 = a^2+2ab+b^2" << endl;
    cout << (a + b) + (a + b) << " = " << (a * a) + (2 * a * b) + (b * b);
}