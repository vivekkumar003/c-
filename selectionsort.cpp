#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements in an array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements"<<endl;
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++) {
           if(a[i]>a[j]){
          int tmep = a[i];
				   a[i]=a[j];
				    a[j]=tmep;
           }
       }
    }
    for(int i=0;i<n;i++){
        cout<<endl<<a[i]<<endl;
    }
    return 0;
}