#include <bits/stdc++.h>

using namespace std;
int main()
{  int n,j;
cin>>n;
int Arr[100];
for(int i=0; i<n; i++) {
         cin>>Arr[i];
}
float c2=0;
float c1=0;
float c3=0;
for(int j=0; j<n; j++){
    if (Arr[j]>0){
        c1++;
    }else if(Arr[j]<0){
        c2++;
    }else{
        c3++;
    }
}float P=0.000000+c1/n;
float N=0.000000+c2/n;
float Z=0.000000+c3/n;
cout<<P<<endl<<N<<endl<<Z;
}
