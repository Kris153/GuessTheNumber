#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
long long kolkoKrugcheta;
long long kolkoSaKrugchetata(long long chislo){
while(chislo>0){
      if(chislo%10==6||chislo%10==9||chislo%10==0){
         kolkoKrugcheta++;
      }
      if(chislo%10==8){
         kolkoKrugcheta=kolkoKrugcheta+2;
      }
      chislo=chislo/10;
}
return kolkoKrugcheta;
}
int main(){
long long otKolko,doKolko,kolkoOpita=0,opit;
cout<<"vuvedete v kakuv diapazon moje da e namislenoto chislo"<<"\n";
cin>>otKolko>>doKolko;
srand(time(0));
long long chislo=rand()%(doKolko-otKolko+1)+otKolko;
cout<<"opitaite se da poznaete"<<"\n";
cin>>opit;
kolkoOpita++;
if(opit==chislo){
    cout<<"bravo"<<"\n"<<"pozna s "<<kolkoOpita<<" opita";
}
while(opit!=chislo){
     if(opit==0){
        cout<<"namislenoto chislo e "<<chislo;
        break;
     }
     if(opit<chislo){
        cout<<"tvurde malko"<<"\n"<<"opitai pak"<<"\n";
        if(kolkoOpita==5){
           cout<<"v chisloto ima "<<kolkoSaKrugchetata(chislo)<<" krugcheta"<<"\n";
        }
        cin>>opit;
        kolkoOpita++;
     }
     if(opit>chislo){
        cout<<"tvurde golqmo"<<"\n"<<"opitai pak"<<"\n";
        if(kolkoOpita==5){
           cout<<"v chisloto ima "<<kolkoSaKrugchetata(chislo)<<" krugcheta"<<"\n";
        }
        cin>>opit;
        kolkoOpita++;
     }
     if(opit==chislo){
        cout<<"bravo"<<"\n"<<"pozna s "<<kolkoOpita<<" opita";
     }
}
return 0;
}
