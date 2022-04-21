#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int curr = a[0];
    int maxi = a[0];
    for(int i=1; i<n; i++){
        curr = max(a[i], curr + a[i]);
        maxi = max(curr, maxi);
    }
    cout<<maxi;

    return 0;
}
//output: 7
