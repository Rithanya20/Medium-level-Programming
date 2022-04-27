/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

bool sortvector(pair<char, int> &a , pair<char,int>&b){
    return a.second < b.second;
}

int main()
{
    string s;
    cin>>s;
    
    unordered_map<char, int> m;
    for(int i=0; s[i]!= '\0'; i++){
        m[s[i]]++;
    }
    
    vector<pair<char, int>> v;
    for(auto i: m){
        v.push_back(i);
    }
    
    sort(v.begin() , v.end(), sortvector);
    
    for(auto i : v){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}
aaaccbbbb
c 2
a 3
b 4
