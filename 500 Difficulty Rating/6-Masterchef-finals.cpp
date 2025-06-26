#include <iostream>
using namespace std;
int main()
{
    int x, t;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x <= 10)
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
