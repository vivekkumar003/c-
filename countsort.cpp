#include<iostream>
using namespace std;
void countsort(int a[],int n){   // array and size of array
int k= a[0];    //max element in an array initialize by first element of array
for(int i=0;i<n;i++){
    k=max(k,a[i]);
}
int count[10]={0};
for(int i=0;i<n;i++){  //find count of element
    count[a[i]]++;
}
for(int i=1;i<=k;i++){
    count[a[i]]+=count[a[i-1]]; //position array
}
int output[n];
for(int i=n-1;i>=0;i++){
    output[--count [a[i]]]=a[i];
}
for(int i=0;i<n;i++){
    a[i]=output[i];
     for(int i=0;i<8;i++){
         cout<<a[i]<<" ";
     }
}
}
int main(){
     int a[]={2,4,2,5,3,1,6,7};
     countsort(a,8);
    
    return 0;
}