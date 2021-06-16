#include <iostream>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
bool stignahLiDoKraq=false;
long long razmerY,razmerX,vx,vy,kolkoPrazniSumPopulnil=1,ix,iy,cifra,kolkoStupki=0;
cout<<"vuvedete jelanata duljina i visochina na poleto \n";
cin>>razmerX>>razmerY;
bool shteMinaLiOtTuk[razmerX][razmerY];
for(vy=0;vy<razmerY;vy++){
    for(vx=0;vx<razmerX;vx++){
        shteMinaLiOtTuk[vx][vy]=false;
    }
}
char stupki='A',pole[razmerX][razmerY],simvolZaOtbelqzvane;
cout<<"vuvedete poleto \n";
for(vy=0;vy<razmerY;vy++){
    for(vx=0;vx<razmerX;vx++){
        cin>>pole[vx][vy];
    }
}
long long nx,ny,kx,ky;
cout<<"vuvedete koordinatite na nachaloto i kraqt \n";
cin>>nx>>ny>>kx>>ky;
cout<<"vuvedete simvolut s koito iskate da se otbelqzva putqt \n";
cin>>simvolZaOtbelqzvane;
pole[nx][ny]=stupki;
for(stupki;stignahLiDoKraq==false && kolkoPrazniSumPopulnil!=0;stupki++){
    kolkoPrazniSumPopulnil=0;
    /*cout<<"\n\n  ";
    for(ix=0;ix<razmerX;ix++){
        iy=0;
        cifra=ix+iy;
        cout<<cifra<<" ";
    }
    cout<<"\n";
    for(iy=0;iy<razmerY;iy++){
        for(ix=0;ix<razmerX;ix++){
        }
    }
    for(iy=0;iy<razmerY;iy++){
        cout<<iy<<" ";
        for(ix=0;ix<razmerX;ix++){
            cout<<pole[ix][iy]<<" ";
        }
        cout<<"\n";
    }*/
    for(iy=0;iy<razmerY;iy=iy+1){
        for(ix=0;ix<razmerX;ix=ix+1){
            if(pole[ix][iy]==stupki){
                if(pole[ix-1][iy]=='.' && ix-1>=0 && iy>=0 && ix-1<razmerX && iy<razmerY){
                    pole[ix-1][iy]=stupki+1;
                    kolkoPrazniSumPopulnil++;
                }
                if(pole[ix][iy-1]=='.' && ix>=0 && iy-1>=0 && ix<razmerX && iy-1<razmerY){
                    pole[ix][iy-1]=stupki+1;
                    kolkoPrazniSumPopulnil++;
                }
                if(pole[ix][iy+1]=='.' && ix>=0 && iy+1>=0 && ix<razmerX && iy+1<razmerY){
                    pole[ix][iy+1]=stupki+1;
                    kolkoPrazniSumPopulnil++;
                }
                if(pole[ix+1][iy]=='.' && ix+1>=0 && iy>=0 && ix+1<razmerX && iy<razmerY){
                    pole[ix+1][iy]=stupki+1;
                    kolkoPrazniSumPopulnil++;
                }
                if((ix-1==kx&&iy==ky)||(ix==kx&&iy-1==ky)||(ix==kx&&iy+1==ky)||(ix+1==kx&&iy==ky)){
                    stignahLiDoKraq=true;
                }
            }
        }
    }
}
if(!stignahLiDoKraq){
    cout<<"nqma put";
}else{
     stupki=pole[kx][ky];
     shteMinaLiOtTuk[kx][ky]=true;
     for(stupki;stupki>'A';stupki--){
         /*cout<<"\n\n  ";
         for(ix=0;ix<razmerX;ix++){
             iy=0;
             cifra=ix+iy;
             cout<<cifra<<" ";
         }
         cout<<"\n";
         for(iy=0;iy<razmerY;iy++){
             for(ix=0;ix<razmerX;ix++){
             }
         }
         for(iy=0;iy<razmerY;iy++){
             cout<<iy<<" ";
             for(ix=0;ix<razmerX;ix++){
                 cout<<pole[ix][iy]<<" ";
             }
             cout<<"\n";
         }*/
        for(iy=0;iy<razmerY;iy=iy+1){
            for(ix=0;ix<razmerX;ix=ix+1){
                if(pole[ix][iy]==stupki && !shteMinaLiOtTuk[ix][iy]){
                    pole[ix][iy]='.';
                }
            }
        }
        for(iy=0;iy<razmerY;iy=iy+1){
            for(ix=0;ix<razmerX;ix=ix+1){
                if(pole[ix][iy]==stupki){
                   if(pole[ix-1][iy]==stupki-1 && ix-1>=0 && iy>=0 && ix-1<razmerX && iy<razmerY){
                      shteMinaLiOtTuk[ix-1][iy]=true;
                      kolkoStupki++;
                   }else if(pole[ix][iy-1]==stupki-1 && ix>=0 && iy-1>=0 && ix<razmerX && iy-1<razmerY){
                           shteMinaLiOtTuk[ix][iy-1]=true;
                           kolkoStupki++;
                    }else if(pole[ix][iy+1]==stupki-1 && ix>=0 && iy+1>=0 && ix<razmerX && iy+1<razmerY){
                            shteMinaLiOtTuk[ix][iy+1]=true;
                            kolkoStupki++;
                     }else if(pole[ix+1][iy]==stupki-1 && ix+1>=0 && iy>=0 && ix+1<razmerX && iy<razmerY){
                           shteMinaLiOtTuk[ix+1][iy]=true;
                           kolkoStupki++;
                      }
                }
           }
        }
     }
     for(iy=0;iy<razmerY;iy=iy+1){
         for(ix=0;ix<razmerX;ix=ix+1){
             if(pole[ix][iy]>='A' && pole[ix][iy]<='Z'){
                pole[ix][iy]=simvolZaOtbelqzvane;
             }
         }
     }
     cout<<"\n\n  ";
     for(ix=0;ix<razmerX;ix++){
         iy=0;
         cifra=ix+iy;
         cout<<cifra<<" ";
     }
     cout<<"\n";
     for(iy=0;iy<razmerY;iy++){
         for(ix=0;ix<razmerX;ix++){
         }
     }
     for(iy=0;iy<razmerY;iy++){
         cout<<iy<<" ";
         for(ix=0;ix<razmerX;ix++){
             cout<<pole[ix][iy]<<" ";
         }
         cout<<"\n";
     }
     if(kolkoStupki==1){
        cout<<"nai kratkiqt put e s duljina "<<kolkoStupki<<" stupka";
     }else{
          cout<<"nai kratkiqt put e s duljina "<<kolkoStupki<<" stupki";
      }
 }
return 0;
}
