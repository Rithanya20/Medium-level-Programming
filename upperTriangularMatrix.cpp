/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int m[4][4] = {{1,2,3, 4}, {0, 1, 2, 3}, {0, 0, 1,2}, {0,0,0,1}};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    int up = 1;
    for(int i=0; i<4; i++){
        for(int j = 0; j<i; j++){
            if(j<i && m[i][j]!=0){
                up = 0;
            }
        }#include <bits/stdc++.h>
using namespace std;

void LIS(int a[], int n)
{
	vector<int> list;
	vector<int> longestlist;
	
	// Highest count
	int hc = 0;
	
	// Current max
	int cm;
	for(int i = 0; i < n; i++)
	{
		cm = INT_MIN;
		for(int j = i; j < n; j++)
		{
			if (a[j] > cm)
			{
				list.push_back(a[j]);
				cm = a[j];
			}
		}
		
		// Compare previous highest subsequence
		if (hc < list.size())
		{
			hc = list.size();
			for(int k = 0; k < list.size(); k++)
			{
				longestlist.push_back(list[k]);
			}
		}
		list.clear();
	}

	for(int i = 0; i < longestlist.size(); i++)
	{
		cout << longestlist[i] << ' ';
	}
	cout << endl;
	cout << "length of longestlist is " << hc;
}

// Driver code
int main()
{
	int a[] = { 10, 22, 9, 33, 21,
				50, 41, 60, 80 };
	int n = sizeof(a) / sizeof(a[0]);
	LIS(a, n);

	return 0;
}

// This code is contributed by Harshit Srivastava

    }
    if(up == 1){
        cout<<"Upper triangular matrix";
    }
    else{
        cout<<"Lower triangular matrix";
    }
   // cout<<"Hello World";

    return 0;
}
1 2 3 4 
0 1 2 3 
0 0 1 2 
0 0 0 1 
Upper triangular matrix
