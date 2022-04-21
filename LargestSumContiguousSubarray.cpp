

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {1, -3, 2, 1, -1};
    int n = sizeof(a)/sizeof(a[0]);
    int curr = a[0];
    int maxi = a[0];
    int start = 0;
    int end = 0;
    for(int i=1; i<n; i++){
        if(a[i] > curr + a[i]){
            curr = a[i];
            start = i;
        }
        else{
            curr = curr + a[i];
            end = i;
        }
       
       if(maxi > curr){
           end = i-1;
       }
        maxi = max(curr, maxi);
    }
    cout<<maxi<<endl;
    cout<<start<<" "<<end;

    return 0;
}
3
2 3
