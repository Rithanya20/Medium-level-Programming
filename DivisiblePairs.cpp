#include<bits/stdc++.h>
using namespace std;

void divPair(int a[], int n){
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i] % a[j] == 0 || a[j] % a[i] == 0){
                v.push_back(make_pair(a[j] , a[i]));
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main(){
    int a[] = {1, 2, 3, 9};
    int n = sizeof(a)/sizeof(a[0]);
    divPair(a, n);
    return 0;
    
}

2 1
3 1
9 1
9 3
