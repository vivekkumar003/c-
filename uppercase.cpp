#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    cout<<"enter string"<<endl;
    getline(cin,s1);// function to take input of a string with spaces
    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);// to convert in lower case use tolower in place of toupper
    cout<<s1<<endl;

    return 0;
}
