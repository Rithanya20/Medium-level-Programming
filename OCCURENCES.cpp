/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string word;
    cin>>word;
    int occur = 0;
    int len = word.size();
    int j = 0;
    for(int i=0; s[i] != '\0' ; i++){
        if(s[i] == word[j]){
            j++;
            
            if(j == len){
                
                j = 0;
                occur++;
            }
        }
    }
    cout<<occur;

    return 0;
}
GEEKSFORGEEKS
GEEKS
2
