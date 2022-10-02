/*
Insertion Sort-

Link-https://www.hackerrank.com/challenges/insertionsort1/problem?isFullScreen=true

Sorting
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.

Insertion Sort
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with a nearly sorted list.

Insert element into sorted list
Given a sorted list with an unsorted number  in the rightmost cell, can you write some simple code to insert  into the array so that it remains sorted?

Since this is a learning exercise, it won't be the most efficient way of performing the insertion. It will instead demonstrate the brute-force method in detail.

Assume you are given the array  indexed . Store the value of . Now test lower index values successively from  to  until you reach a value that is lower than , at  in this case. Each time your test fails, copy the value at the lower index to the current index and print your array. When the next lower indexed value is smaller than , insert the stored value at the current index and print the entire array.
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
    int temp=a[n-1];
    
    for(int i=0;i<n-1;++i){
        if(a[n-2-i]>temp){a[n-1-i]=a[n-2-i];}
        else {a[n-1-i]=temp;break;}
        for(int j=0;j<n;++j){
        cout<<a[j]<<" ";
        }
        cout<<endl;

    }
    if(a[0]>temp){a[0]=temp;
     for(int j=0;j<n;++j){
        cout<<a[j]<<" ";}        
    }
    else {for(int j=0;j<n;++j){
        cout<<a[j]<<" ";}
    }
}
