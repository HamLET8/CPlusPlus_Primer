#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<stack>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::stack;
#define  pending  -1;

int func(string st)
{
	int opr1 = stoi(st,st.begin()+2,st.end());
	int opr2 = stoi(st,st.begin(),st.begin()+1);
	char c = st[1];

	switch(c){
		case '+':
			return (opr1 + opr2);
		case '-':
			return (opr1 - opr2);
		case '*':
			return (opr1 * opr2);
		case '/':
			return (opr1 + opr2);
	}
	return -1;
}




int main(int argc,char *argv[] )
{

	stack<string> stk;
	int lsp =0;
	string str;

	string s("((2+3)*(4+1))");

	for(int i=0;i<s.size();++i)
	{
		string c(s,i,i+1);
		if(c=="(")
		{
			++lsp;
			stk.push(c);
			continue;
		}else if(c == ")")
		{
			
			while(stk.top() !="(")
			{
				cout <<stk.top()<<endl;
				str += stk.top();	///3+2
				stk.pop();
			}
			--lsp;
			stk.push(string(func(str)));
			str = "";
		}else 
		{
			stk.push(c);
		}
	}

	cout<<stk.top()<<endl;

	if(!lsp) cout<<"fail!"<<endl;
	
	return 0;

}
