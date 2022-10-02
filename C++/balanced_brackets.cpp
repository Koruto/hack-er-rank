/* 
PROBLEM STATEMENT

A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given  strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES. Otherwise, return NO.

Link: hackerrank.com/challenges/balanced-brackets/problem

*/

#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> m = {{'{',-3},{'[',-2},{'(',-1},{'}',3},{']',2},{')',1}} ;
string isbalanced(string s)
{
   stack<char>st;
   for(auto it:s)
   {
       if(m[it]<0){st.push(it);}
       else
       {
          if(st.empty()){return"NO";}
          else{
                char x=st.top();
                if(m[it]+m[x]!=0){return"NO";}
                st.pop();
          }
       }
   }
   if(!st.empty()){return"NO";}
   return"YES";
}

signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      cout<<isbalanced(s)<<endl;
  }


}
