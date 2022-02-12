/*
Replace the characters in a string based on the transformation: A -> Z, B->Y, C->X and so on​
Input:  
FADE
Output:  
UZWV 
 */ 
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0; s[i]!='\0'; i++){
        int diff= int(s[i])-int('A');
        cout<<char(int('Z')-diff);
    }
    //cout<<int('A');
    return 0;
}
FADE
UZWV
