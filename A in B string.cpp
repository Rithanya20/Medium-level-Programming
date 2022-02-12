/*
While typing, it is possible to press a key long enough that it 
could get typed more than once. Given two strings A and B, check if B could be a typed version of A.
Input 1:  
A = anime  
B = aanimeee
Output 1:  
True  
Input 2:  
A = Limcee  
B = Limmcce
Output 2:  
False 
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s2.find(s1) != string::npos){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
    return 0;
}
Limcee
Limcce
FALSE
