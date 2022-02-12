/*
Given a matrix M of dimension A x B containing 0’s and 1’s, find out the 
number of positions at which the value is 1 and other elements in its corresponding rows and columns are all 0.
Input 1:  
A = 3, B = 3  
100  
M = 001  
010  
Output 1:  
3  
Input 2:  
A = 3, B = 3  
100  
M = 001  
100  
Output 2:  
1 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[n][n];
    int a[n];
   
    for(int i=0; i<n; i++){
       
        for(int j=0; j<n; j++){
            
            cin>>m[i][j];
            
            }
            
        }
        int final=0;
        
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int jcopy = j, icount = 0, icopy = i, jcount=0;
            bool flag = true;
            if(m[i][j]==1){
                for(int x = 0; x<n; x++){
                    if(m[x][jcopy] == 1){
                        //cout<<x<<" "<<jcopy<<"---->"<<i<<" "<<j<<endl;
                        icount++;
                        if(icount > 1){
                            flag = false;
                            break;
                        }
                    }
                }
                for(int y=0; y<n; y++){
                    if(m[icopy][y]==1){
                        //cout<<icopy<<" "<<y<<"----$"<<i<<" "<<j<<endl;
                        jcount++;
                        if(jcount > 1){
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag == true && icount == 1 && jcount==1){
                    //cout<<i<<" "<<j<<endl;
                    final += 1;
                }
            }
        }
    }
    cout<<final;

    return 0;
}
3
1 0 0
0 0 1
1 0 0
1
