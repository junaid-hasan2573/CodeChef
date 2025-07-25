#include <iostream>
using namespace std;
int main()
{
    int x, y, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x > y)
        {
            cout << "LOSS" << endl;
        }
        else if (x < y)
        {
            cout << "PROFIT" << endl;
        }
        else
        {
            cout << "NEUTRAL" << endl;
        }
    }
    return 0;
}
