#include <iostream>
using namespace std;
int main(){
long long chislo;
cin>>chislo;
if(chislo%4==0){
   if(chislo%100==0){
      if(chislo%400==0){
         cout<<"visokosna e";
      }else{
           cout<<"ne e visokosna";
      }
   }else{
         cout<<"visokosna e";
   }
}else{
     cout<<"ne e visokosna";
}
return 0;
}
