/*
InsertionSort-
Link-https://www.hackerrank.com/challenges/insertionsort2/problem?isFullScreen=true

In Insertion Sort Part 1, you inserted one element into an array at its correct sorted position. Using the same approach repeatedly, can you sort an entire array?

Guideline: You already can place an element into a sorted array. How can you use that code to build up a sorted array, one element at a time? Note that in the first step, when you consider an array with just the first element, it is already sorted since there's nothing to compare it to.

In this challenge, print the array after each iteration of the insertion sort, i.e., whenever the next element has been inserted at its correct position. Since the array composed of just the first element is already sorted, begin printing after placing the second element.
*/


#include <bits/stdc++.h>

using namespace std;

signed main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=1;i<n;++i)
    {
        for(int j=i;j>0;--j)
         {
            if(a[j]<a[j-1]) 
             { 
              int temp=a[j];
              a[j]=a[j-1];
              a[j-1]=temp;
             }
            
         }
         
        for(int k=0;k<n;++k){cout<<a[k]<<" ";}
        cout<<endl;    
    }
}
