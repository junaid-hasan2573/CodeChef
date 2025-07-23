#include <iostream>
using namespace std;
int main()
{
    int n, x, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        if (n <= x)
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
