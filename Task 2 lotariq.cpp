#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
srand(time(0));
long long namislenoChislo=rand()%900+100,opitZaPoznavane,cifraNaNamislenotoChislo1,cifraNaNamislenotoChislo2,cifraNaNamislenotoChislo3,cifraNaOpita1,cifraNaOpita2,cifraNaOpita3,cifriNaNamislenotoChislo[3],cifriNaOpita[3],kolkoEdnakvi=0;
cout<<namislenoChislo<<"\n";
cout<<"Vuvededete opit za poznavane na chisloto";
cin>>opitZaPoznavane;
cifraNaNamislenotoChislo1=namislenoChislo%10;
namislenoChislo=namislenoChislo/10;
cifraNaNamislenotoChislo2=namislenoChislo%10;
namislenoChislo=namislenoChislo/10;
cifraNaNamislenotoChislo3=namislenoChislo%10;
cifraNaOpita1=opitZaPoznavane%10;
opitZaPoznavane=opitZaPoznavane/10;
cifraNaOpita2=opitZaPoznavane%10;
opitZaPoznavane=opitZaPoznavane/10;
cifraNaOpita3=opitZaPoznavane%10;
cifriNaNamislenotoChislo[0]=cifraNaNamislenotoChislo3;
cifriNaNamislenotoChislo[1]=cifraNaNamislenotoChislo2;
cifriNaNamislenotoChislo[2]=cifraNaNamislenotoChislo1;
cifriNaOpita[0]=cifraNaOpita3;
cifriNaOpita[1]=cifraNaOpita2;
cifriNaOpita[2]=cifraNaOpita1;
bool polzvalLiSumGo1[3],polzvalLiSumGo2[3];
for(int i=0;i<3;i++){
    polzvalLiSumGo1[i]=false;
    polzvalLiSumGo2[i]=false;
}
if(cifraNaNamislenotoChislo1==cifraNaOpita1&&cifraNaNamislenotoChislo2==cifraNaOpita2&&cifraNaNamislenotoChislo3==cifraNaOpita3){
    cout<<"Bravo ti pozna i pechelish 10 000 dolara";
}
else{
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            if(!polzvalLiSumGo1[i] && !polzvalLiSumGo2[k] && cifriNaNamislenotoChislo[i]==cifriNaOpita[k]){
                cout<<cifriNaNamislenotoChislo[i]<<" "<<cifriNaOpita[k]<<"\n";
                kolkoEdnakvi++;
                polzvalLiSumGo1[i]=true;
                polzvalLiSumGo2[k]=true;
            }
        }
    }
    if(kolkoEdnakvi==3){
        cout<<"poznahte vsichki chisla no ne v pravilniq red i pechelite 3000 dolara";
    }else if(kolkoEdnakvi==2){
             cout<<"poznahte dve  chisla i pechelite 2000 dolara";
     }else if(kolkoEdnakvi==1){
              cout<<"poznahte samo edna cifra i pechelite 1000 dolara";
      }else{
          cout<<"ne poznahte nito edno chislo i ne pechelite nishto";
       }
}
return 0;
}
