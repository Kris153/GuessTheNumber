#include <iostream>
using namespace std;
int main(){
long long razmer,kolkoZvezdichki,kopieRazmer,kolkoPrazniMesta;
cout<<"vuvedete jelaniqt razmer \n";
cin>>razmer;
kopieRazmer=razmer;
for(razmer;razmer>0;razmer--){
    cout<<"\n";
    kolkoPrazniMesta=kopieRazmer-razmer;
    kolkoZvezdichki=kopieRazmer-kolkoPrazniMesta;
    for(kolkoPrazniMesta;kolkoPrazniMesta>0;kolkoPrazniMesta--){
        cout<<" ";
    }
    for(kolkoZvezdichki;kolkoZvezdichki>0;kolkoZvezdichki--){
        cout<<"*";
    }
}
return 0;
}
