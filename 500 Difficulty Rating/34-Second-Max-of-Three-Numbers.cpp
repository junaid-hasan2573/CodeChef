#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (((x > y) && (x < z)) || ((x > z) && (x < y)))
        {
            cout << x << endl;
        }
        else if (((y > x) && (y < z)) || ((y < x) && (y > z)))
        {
            cout << y << endl;
        }
        else
        {
            cout << z << endl;
        }
    }
    return 0;
}

/*  [Best Solution]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int nums[3];
        cin >> nums[0] >> nums[1] >> nums[2];
        sort(nums, nums + 3);
        cout << nums[1] << endl;
    }
}*/
