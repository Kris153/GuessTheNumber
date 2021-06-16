#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
//nojica(0),kamuk(1),hartiq(2)
srand(time(0));
long long namislenoChislo=rand()%3,chisloNaPotrebitelq;
//cout<<namislenoChislo;
cin>>chisloNaPotrebitelq;
if(namislenoChislo==0&&chisloNaPotrebitelq==0){
    cout<<"i kompiutura i potrebitelq sa izbrali nojica suotvetno rezultatut e raven";
}
if(namislenoChislo==1&&chisloNaPotrebitelq==1){
    cout<<"i kompiutura i potrebitelq sa izbrali kamuk suotvetno rezultatut e raven";
}
if(namislenoChislo==2&&chisloNaPotrebitelq==2){
    cout<<"i kompiutura i potrebitelq sa izbrali hartiq suotvetno rezultatut e raven";
}
if(namislenoChislo==0&&chisloNaPotrebitelq==2){
    cout<<"kompiutura e izbral nojica a potrebitelqt hartiq suotvetno kompiuturut pobejdava";
}
if(namislenoChislo==2&&chisloNaPotrebitelq==0){
    cout<<"kompiutura e izbral hartiq a potrebitelqt nojica suotvetno potrebitelqt pobejdava";
}
if(namislenoChislo==1&&chisloNaPotrebitelq==0){
    cout<<"kompiutura e izbral kamuk a potrebitelqt nojica suotvetno kompiuturut pobejdava";
}
if(namislenoChislo==0&&chisloNaPotrebitelq==1){
    cout<<"kompiutura e izbral nojica a potrebitelqt kamuk suotvetno potrebitelqt pobejdava";
}
if(namislenoChislo==2&&chisloNaPotrebitelq==1){
    cout<<"kompiutura e izbral hartiq a potrebitelqt kamuk suotvetno kompiuturut pobejdava";
}
if(namislenoChislo==1&&chisloNaPotrebitelq==2){
    cout<<"kompiutura e izbral kamuk a potrebitelqt hartiq suotvetno potrebitelqt pobejdava";
}
return 0;
}
