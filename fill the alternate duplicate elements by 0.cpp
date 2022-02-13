/*
Given an array, fill the alternate duplicate elements by 0.
Input 1:  
2 2 2 2  
Output 1:  
2 0 2 0   
Input 2:  
1 2 2 5 6 9 5 2  
Output 2:  
1 2 0 5 6 9 0 2 

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
        if(m[a[i]]%2 ==0 ){
            a[i] = 0;
            //m[a[i]] = 0;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
8
1 2 2 5 6 9 5 2
1 2 0 5 6 9 0 2 
