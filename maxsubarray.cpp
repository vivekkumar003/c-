#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin >>n;
   /* int k;
    cout<<"enter size of sub array"<<endl;
    cin >> k; */
    int a[n];
    int p[n];
    int v=0;
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    p[0]=a[0];
    for(int i=1;i<n;i++){
       
    
            p[i]=p[i-1]+a[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
    
    return 0;
}