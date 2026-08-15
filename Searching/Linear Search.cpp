#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, target, pos = -1;

    cout << "Number of elements: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Target number: ";
    cin >> target;

    for(int i = 0; i < n; i++)
    {
        if(target == arr[i])
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
        cout << "not found";
    else
        cout << "found at " << pos << " index";

    return 0;
}