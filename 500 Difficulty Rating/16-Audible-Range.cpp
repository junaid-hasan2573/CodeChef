#include <iostream>
using namespace std;
int main()
{
    int x, t;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (67 <= x && 45000 >= x)
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
