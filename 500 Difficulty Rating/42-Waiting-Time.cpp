#include <iostream>
using namespace std;
int main()
{
    int x, k, t;
    cin >> t;
    while (t--)
    {
        cin >> k >> x;
        cout << ((k * 7) - x) << endl;
    }
    return 0;
}
