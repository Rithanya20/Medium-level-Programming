#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	queue<int> q;
	string op = "";
	int ans = 0;
	for(int i=0; s[i]!='\0'; i++){
		if(isdigit(s[i])){
			int temp = s[i] - '0';
			q.push(temp);
		}
		else{
			op += s[i];
		}
	}
	
	int a = q.front();
	cout<<a<<" ";
	q.pop();
	int b = q.front();
	cout<<b<<" ";
	q.pop();
	if(op[0] == '+'){
		ans = a + b;
	}
	else if(op[0] == '-'){
		ans = a - b;
	}
	else if(op[0] == '*'){
		ans = a*b;
	}
	else{
		ans = a/b;
	}
	
	cout<<ans<<endl;
	
	for(int i=1;  op[i]!= '\0'; i++ ){
    a = ans;
	b = q.front();
	q.pop();
	if(op[i] == '+'){
		ans = a + b;
	}
	else if(op[i] == '-'){
		ans = a - b;
	}
	else if(op[i] == '*'){
		ans = a*b;
	}
	else{
		ans = a/b;
	}
	cout<<ans<<endl;
	}
	cout<<ans;
}
Input : "12345*+-+"
Output: 6
Explanation: [1*2+3-4+5 = 6] 
