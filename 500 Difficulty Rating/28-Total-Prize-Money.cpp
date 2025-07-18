#include <iostream>
using namespace std;
int main()
{
    int x, y, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        cout << ((x * 10) + (y * 90)) << endl;
    }
    return 0;
}
