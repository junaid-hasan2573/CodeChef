#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if ((n % 3) == 0)
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
