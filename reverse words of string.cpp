#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2, s3;
    getline(cin,s1);
    
    stringstream s(s1);
   
    string word, final;
    
    while(s >> word){
    
        string t = word;
        int l = t.length();
        string temp = "";
        for(int i=l-1; i>=0; i--){
            temp += t[i];
        }
        cout<<temp<<" ";
    }
}
dogs bark
sgod krab 
