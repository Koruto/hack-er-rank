/*
The Next Greater Element-

Linl-https://www.hackerrank.com/contests/coding-gym-mo1018/challenges/the-next-greater-element

Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element  is the first greater element on the right side of  in array.

Elements for which no greater element exist, consider next greater element as .

Input Format

You are given , the number of elements, followed by  space-separated integer values.

Constraints

Array values are 32bit integers.

Output Format

For each element of the array  print its NGE, in the same order of the array.

Sample Input 0

10
27 12 13 28 42 2 11 45 34 37
Sample Output 0

28 13 28 42 45 11 45 -1 37 -1
Sample Input 1

20
77 58 13 3 38 71 7 34 12 6 59 24 2 48 57 22 5 80 47 92
Sample Output 1

80 71 38 38 71 80 34 59 59 59 80 48 48 57 80 80 80 92 92 -1
    
*/
    

#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int>v)
{
   vector<int> nge(v.size());
   stack<int> st;
   for(int i=0;i<v.size();++i)
   {
       while(!st.empty() && v[i]>v[st.top()])
       {
           nge[st.top()]=i;
           st.pop();
       }
       st.push(i);
   }
   while(!st.empty())
   {
       nge[st.top()]=-1;
       st.pop();
   }
   return nge;

}

int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;++i)
   {
     cin>>v[i];
   }
   vector<int>nge = NGE(v);
   for(int i=0;i<n;++i)
   {
     cout<<v[i]<<" "<<(nge[i]==-1? -1:v[nge[i]]) <<endl;
   }


}