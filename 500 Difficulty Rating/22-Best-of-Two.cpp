#include <iostream>
using namespace std;
int main()
{
    int x, y, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x >= y)
        {
            cout << x << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}
