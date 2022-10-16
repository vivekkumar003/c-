#include<iostream>
using namespace std;
int fact (int n){
    int i;
   int fact=1;
    for (i=2;i<=n;i++){
        fact=fact*i;
        


    }
    
return fact;

}
int main(){
    int a;
    cout<<"enter value ";
    cin >> a;
 int ans= fact(a);
    cout<<"factorial of A number "<< ans<<endl;
    return 0;


}