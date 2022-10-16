#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],p[n];
    p[0]=a[0];
    for(int i=0;i<n;i++){
        cin>>a[i];
        p[i]=p[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int sum=p[r];
        if((l-1)>=0){
            sum=sum-p[l-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}