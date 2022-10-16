#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    stack<int>st;
    st.push(2);
    st.push(3);
    while(!st.empty()){
    cout<<' '<<st.top();
    st.pop();

    }
    return 0;
}