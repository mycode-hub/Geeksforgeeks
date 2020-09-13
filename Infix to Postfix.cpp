/*
Given an infix expression in the form of a string str. Conver this infix expression to postfix expression.

Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
Input:
The first line of input contains an integer T denoting the number of test cases. The next T lines contains an infix expression.The expression contains all characters and ^,*,/,+,-.

Output:
For each testcase, in a new line, output the infix expression to postfix expression.

Constraints:
1 <= T <= 100
1 <= length of str <= 103

Example:
Input:
2
a+b*(c^d-e)^(f+g*h)-i
A*(B+C)/D

Output:
abcd^e-fgh*+^*+i-
ABC+*D/

** For More Input/Output Examples Use 'Expected Output' option ** */
#include <bits/stdc++.h>
using namespace std;
int get_precedence(char c)
{
     if(c=='^')
        return 3;
     else
      if(c=='*' || c=='/')
        return 2;
    if(c=='-' || c=='+')
        return 1;
    else
        return -1;
}
int pre(char c1,char c2)
{
    int a=get_precedence(c1);                   //new operator
    int b=get_precedence(c2);                   //stack top
    if(a==b)
    {
        if(a==3)
            return 0;
    }
    if(a<=b)
        return 1;
    else
        return 0;
    
}
string infix_to_postfix(string & str)
{
    string res;
    stack<char> st;
    for(char c:str)
    {
        if(isalpha(c))                          //if aplhabet add to result
            res+=c;
        else
        {
            if(c=='(')
                st.push('(');                   // if opening bracket push onto stack
            else
        //If the scanned character is an ‘)’, pop and to output string from the stack 
        // until an ‘(‘ is encountered. 
            if(c==')')
            {
    
                while(st.top()!='(')
                {
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while(!st.empty() && pre(c,st.top()))
                {
                    res+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
    }
    //pop all remaining operators;
    while(!st.empty() && st.top()!=')')
    {
        res+=st.top();
        st.pop();
    }
    return res;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    std::cout << infix_to_postfix(s) << std::endl;
	}
	//string s1="ab-c/defg-pq+^^*-";
	
	
	return 0;
}
