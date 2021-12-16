#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
list<string> Personne;
Personne.push_back("bouzarhoun ,ismail, 20ans ");
Personne.push_back("anass,mroubae ,21ans" );
Personne.push_back("adam ,maouan, 17ans");
Personne.push_back("zayd,filali , 18ans" );
cout<<endl<<"liste des personnes:";
std::list<string>::iterator it;
for (it = Personne.begin(); it != Personne.end(); ++it){
std::cout << "\n" <<*it; 
}
Personne.sort();
cout<<endl<<"liste  des personnnes trie:\n";
for (it = Personne.begin(); it != Personne.end(); ++it){ 
std::cout  <<*it<< "\n";
}
return 0;
}