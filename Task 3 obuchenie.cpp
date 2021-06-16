#include <iostream>
using namespace std;
int main(){
long long kolkoETaziGodina,sKolkoProcentaNarastva,kolkoGodiniShteUcha,sledKolkoGodiniShteZapochnaDaUcha,kolkoShteMiStruva=0;
cout<<"vuvedete kolko struva obuchenieto tazi godina \n";
cin>>kolkoETaziGodina;
cout<<"vuvedete s kolko procenta narastva obuchenieto vsqka godina \n";
cin>>sKolkoProcentaNarastva;
cout<<"vuvedete sled kolko godini shte zapochnete da uchite\n";
cin>>sledKolkoGodiniShteZapochnaDaUcha;
cout<<"vuvedete kolko godini shte uchite\n";
cin>>kolkoGodiniShteUcha;
for(int i=0;i<sledKolkoGodiniShteZapochnaDaUcha;i++){
    kolkoETaziGodina=kolkoETaziGodina+((kolkoETaziGodina/100)*sKolkoProcentaNarastva);
}
for(int i=0;i<kolkoGodiniShteUcha;i++){
    kolkoETaziGodina=kolkoETaziGodina+((kolkoETaziGodina/100)*sKolkoProcentaNarastva);
    kolkoShteMiStruva=kolkoShteMiStruva+kolkoETaziGodina;
}
cout<<kolkoShteMiStruva;
return 0;
}

