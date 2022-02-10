#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2, s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    
    string sent = s1 + " " + s2 + " " + s3;
    
    stringstream s(sent);
    map<string,int> fw;
    string word;
    while(s >> word){
        fw[word]++;
    }
     map <string, int>::iterator m;
    for (m = fw.begin(); m != fw.end(); m++){
        if(m->second == 3){
            cout<<m->first<<" ";
        }
    }
        
    
    
}
I walk everyday in the morning
I run everyday in the evening
I swim everyday in the night
I everyday in the     <---- output
