#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[50];
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int sum=0;
        int l,r;
        for(int i=l;i<=r;i++){
            sum=sum+a[i];
            cout<<sum<<endl;
        }
       cout<<sum<<endl;
    }
}