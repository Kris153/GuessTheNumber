#include <iostream>
using namespace std;
int main(){
long long razmer;
cout<<"vuvedete jelaniqt razmer \n";
cin>>razmer;
for(razmer;razmer>0;razmer--){
    cout<<"\n";
    for(int i=razmer;i>0;i--){
        cout<<i;
    }
    for(int k=2;k<=razmer;k++){
        cout<<k;
    }
}
return 0;
}
