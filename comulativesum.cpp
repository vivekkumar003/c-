#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int i=l;i<=r;i++){
            sum=sum+a[i];
            cout<<sum<<endl;
        }
         
    }

    return 0;
}