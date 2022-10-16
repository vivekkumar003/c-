#include<bits/stdc++.h>
using namespace std;
void printArray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void merge(int a[],int low,int mid,int high)
{   
    int b[100];
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;

        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}

void merge_sort(int a[],int low,int high)
{
    if(low<high)
    {
       int mid=(low+high)/2;
       merge_sort(a,low,mid);
       merge_sort(a,mid+1,high);
       merge(a,mid,low,high);
    }
}
int main()
{   
    int n;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
    }
    printArray(a,n);
    merge_sort(a,0,n-1);
    printArray(a,n);
    return 0;
}