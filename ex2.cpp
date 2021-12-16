#include <iostream>
#include<vector>
using namespace std;
int main(){
   string nbr;//declaration de la vector
   cout<<"entrer 12 nombre:";
   cin>>nbr;
cout<<"  jour "<<nbr.substr(0,2); // le jour
cout<<"  mois "<<nbr.substr(2,2);// le mois
cout<<" l'annee "<<nbr.substr(4,4); // l'annee
cout<<" l'heure "<<nbr[8]<<nbr[9]<<"h "<<" et "<<nbr[10]<<nbr[11]<<" min "<<endl; // l'heure et minute
   return 0;
}
