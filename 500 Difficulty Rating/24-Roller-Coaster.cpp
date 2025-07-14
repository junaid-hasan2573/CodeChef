#include <iostream>
using namespace std;
int main()
{
    int x, h, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> h;
        if (x >= h)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
