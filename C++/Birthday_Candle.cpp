#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 int max= INT_MIN;
 int count=0;
 cin>>n;
 int Arr[100000];
 for(int i=0; i<n; i++){
     cin>>Arr[i];
 }for(int j=0; j<n; j++){
     if(Arr[j]>max){
         max=Arr[j];
     }
 }for(int k=0; k<n; k++){
     if(Arr[k]==max){
         count++;
     }
 }cout<<count;
}  
