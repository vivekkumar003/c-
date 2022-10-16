#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
       
    }
   
}
int main(){
    int n;
    cin>>n;
     
    int a[n];
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
     cin>>key;
   int  res=linearsearch(a,n,key);
      cout<<res<<endl;
      return 0;
}