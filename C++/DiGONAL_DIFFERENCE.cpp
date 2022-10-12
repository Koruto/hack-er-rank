#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(int Arr[][100] ,int n) {
int sum1=0;
int sum2=0;
  for(int i=0; i<n; i++){
        for(int j=0; j<n ; j++)
         {
        if(i==j){
            sum1 += Arr[i][j];
        }
        if ((i+j )==(n-1)){
            sum2 += Arr[i][j];
        }
     } 
}

return sum1-sum2;
}
int main(){
int n;
int Arr[100][100];
cin>>n;
for(int i=0; i<n; i++)
{
        for(int j=0; j<n ; j++)
    {
        cin>>Arr[i][j];
    }
}
int sum= diagonalDifference(Arr ,n);
if(sum>0) 
 {     cout <<sum;    
}
else { cout<< -(sum);
    }
}
