#include <iostream>
using namespace std;
int main()
{
    int a, b, c, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << ((((a + b) / 2.00) > c) ? "YES" : "NO") << endl;
    }
    return 0;
}
