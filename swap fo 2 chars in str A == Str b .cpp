/*
Given 2 strings A and B, check if swapping 2 characters only once in string ‘A’ makes the string equal to ‘B’.
Input:  
A = flrweo    
B = flower​
Output:  
True
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    map<char,int> map;
    //vector<char>v;
    int final=0;
    for(int i=0; s1[i]!='\0'; i++){
        if(s1[i] != s2[i]){
            map[s1[i]]++;
            map[s2[i]]++;
            
        }
    }
    int max=0;
    for(auto i:map){
        //cout<<i.first<<" "<<i.second<<endl;
        if(i.second == 2){
            final++;
        }
    }
    if(final == 2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}

fllwer
flower
false
