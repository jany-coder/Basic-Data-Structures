#include <bits/stdc++.h>
using namespace std;

int main()
{
    // //replace
    // vector<int> v = {1, 2, 3, 2, 5, 6, 7, 2, 9};
    // replace(v.begin(), v.end(), 2, 100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // find
    vector<int> v = {1, 2, 3, 2, 3, 6, 7, 2, 9};
    auto it = find(v.begin(), v.end(), 3);
    if (it == v.end())
        cout << "Not found";
    else
        cout << "Found";
    return 0;
}