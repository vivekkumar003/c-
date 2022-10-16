#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
       string s1;
       cout<<"enter a string"<<endl;
       cin>>s1;
       sort(s1.begin(),s1.end());
       cout<<s1<<endl;



    return 0;
}