#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
    int s=0;
    int e=n;
   int mid=(s+e)/2;
   while(s<=e){
       if(a[mid]==key){
           return mid;
       }
       if(a[mid]<key){
           e=mid-1;
       }
       else{
           s=mid+1;
       }
   }
   return -1;
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
    cout<<binarysearch(a,n,key)<<endl;
    return 0;
}
