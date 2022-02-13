/*
A ball is dropped from a height H (meters), it bounces back to a height of B*H where B is the bouncing factor and 0<B<1. Calculate the total distance travelled by the ball before coming to rest while dropped from a height H on a surface with a bouncing factor of B. When height is less than 1m, ball does not bounce back.
Input:  
H=5, B=0.5​
Output:  
12.5  
Explanation :  
5 + 2.5 + 2.5 + 1.25 + 1.25 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    float h,b;
    cin>>h>>b;
    float height = h;
    float sum = 0;
    while(height >= 1){
        sum += height;
        //cout<<"height"<<height<<endl;
        float hb = height*b;
        if(hb >= 1){
        sum += hb;
        //cout<<"bounce"<<hb<<endl;
        height = hb;
        }
        else{
            break;
        }
        
        
    }
    cout<<sum;
}
5 0.5
12.5
