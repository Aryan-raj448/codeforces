#include<iostream>
#include<stack>
using namespace std;


int prio(char ch){
	if(ch=='+' || ch=='-') return 1;
	else return 2;
}

string solve(string val1,string val2,char ch){
	string s="";
	s.push_back(ch);
	s+=val1;
	s+=val2;
	return s;
}
int main(){
	string s="(2+6)*4/8-3";
	
	stack<string> st;
	stack<char> op;
	for(int i=0; i<s.length(); i++){
		if(s[i]>=48 && s[i]<=57) {
		st.push(to_string(s[i]-48));
	}	else{
			if(op.size()==0) op.push(s[i]);
			else if(s[i]=='(') op.push(s[i]);
			else if(op.top()=='(') op.push(s[i]);
			else if(s[i]==')'){
				while(op.top()!='('){
					char ch=op.top();
					op.pop();
					string val2=st.top();
					st.pop();
					string val1=st.top();
					st.pop();
					string ans = solve(val1, val2, ch);
					st.push(ans);
				}
				op.push(s[i]);
			}
			else if(prio(s[i]) > prio(op.top())) op.push(s[i]);
			else{
			    while(op.size()>=0 && prio(s[i])<=prio(op.top())){
					char ch=op.top();
					op.pop();
					string val2=st.top();
					st.pop();
					string val1=st.top();
					st.pop();
					string ans = solve(val1, val2, ch);
					st.push(ans);
				}
				op.push(s[i]);	
			}
		}
	}
	while(op.size()>0){
		char ch=op.top();
		op.pop();
		string val2=st.top();
		st.pop();
		string val1=st.top();
		st.pop();
		string ans = solve(val1, val2, ch);
		st.push(ans);
	}
	cout<<st.top()<<endl;
}