#include <bits/stdc++.h>

using namespace std;

int main() {
    int s,t,a,b,m,n;
    int Apple=0;
     int Orange=0;
    int App[100000];
    int Oran[100000]; 
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        cin>>App[i];
    }  
   for(int j=0; j<n; j++){
        cin>>Oran[j];
    } 
    for(int k=0; k<m; k++){
       App[k]+= a;
       if(App[k]>=s&&App[k]<=t){
           Apple++;
       }
    }  
    for(int l=0; l<n; l++){
        Oran[l]+= b;
        if(Oran[l]>=s&&Oran[l]<=t){
           Orange++;
       }
    } 
    cout<<Apple<<endl<<Orange<<endl;     
}
