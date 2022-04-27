#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin, s);
    
    string one = "";
    char two[3] = {'A', 'B', 'C'};
    char three[3] = {'D','E','F'};
    char four[3] = {'G','H','I'};
    char five[3] = {'J','K','L'};
    char six[3] = {'M', 'N', 'O'};
    char seven[4] = {'P','Q','R','S'};
    char eight[3] = {'T','U','V'};
    char nine[4] = {'W','X','Y','Z'};
    
    stack<char> st;
    
     st.push(s[0]);
     int count = 0;
    
    for(int i=1; s[i]!='\0' ; i++){
       if(st.top() == s[i]){
          count++;
       }
       else if(st.top() != s[i]){
           char temp = st.top();
           
           if(temp == '2'){
               cout<<two[count];
           }
           else if(temp == '3'){
               cout<<three[count];
           }
           else if(temp == '4'){
               cout<<four[count];
           }
           else if(temp == '5'){
               cout<<five[count];
           }
           else if(temp == '6'){
               cout<<six[count];
           }
           else if(temp == '7'){
               cout<<seven[count];
           }
           else if(temp == '8'){
               cout<<eight[count];
           }
           else if(temp == '9'){
               cout<<nine[count];
           }
           else if(temp == ' '){
               cout<<" ";
           }
           else{
               //cout<<"invalid";
           }
           count = 0;
           st.pop();
           st.push(s[i]);
       }
    }
    if(!st.empty()){
           char temp = st.top();
           
           if(temp == '2'){
               cout<<two[count];
           }
           else if(temp == '3'){
               cout<<three[count];
           }
           else if(temp == '4'){
               cout<<four[count];
           }
           else if(temp == '5'){
               cout<<five[count];
           }
           else if(temp == '6'){
               cout<<six[count];
           }
           else if(temp == '7'){
               cout<<seven[count];
           }
           else if(temp == '8'){
               cout<<eight[count];
           }
           else if(temp == '9'){
               //what if they input more than the limit
               if(count > 3){
                   cout<<nine[count - 4];
               }
               else{
                   cout<<nine[count];
               }
               
           }
           else if(temp == ' '){
               cout<<" ";
           }
           else{
               //cout<<"invalid";
           }
           count = 0;
           st.pop();
    }
    

    return 0;
}
888777686 
VRMTM
