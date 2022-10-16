#include <iostream>
#include <algorithm>
using namespace std;
int main(){
     int idata[]={1,2,2,3,4,4,5};
     replace(idata, idata+7, 2, 4);
     remove(idata, idata+7, 4);
     for(int i=0;i<3;i++){
         cout<< idata[i]<<endl;
     }
     return 0;
}