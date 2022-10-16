#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a string"<<endl;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}