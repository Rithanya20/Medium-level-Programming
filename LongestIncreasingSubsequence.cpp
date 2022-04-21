#include<bits/stdc++.h>
using namespace std;

void lis(int a[], int n){
    int hc = 0, cm = INT_MIN;
    vector<int> list;
    vector<int> longestlist;
    
    for(int i=0; i<n ; i++){
        for(int j = i; j<n ; j++){
            if(a[j] > cm){
                cm = a[j];
                list.push_back(a[j]);
            }
        }
        
        if(hc < list.size()){
            hc = list.size();
            for(int k=0; k<list.size(); k++){
                longestlist.push_back(list[k]);
            }
        }
    }
    for(int i=0; i<longestlist.size(); i++){
        cout<<longestlist[i]<<" ";
    }
    
    
}

int main(){
    
    int a[] = {1,2,4,3,5};
    int n = sizeof(a)/sizeof(a[0]);
    lis(a, n);
    return 0;
}

1 2 4 5 
