#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of first array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cout<<"enter sizee of second array";
    cin>>m;
    int b[m];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int p=n+m;
    int c[p];
    for(int i=0;i<p;i++){
        c[i]=a[i];
        c[i+m]=b[i];
    }
    for(int i=0;i<p;i++)
    cout<<c[i]<<endl;

    return 0;
}