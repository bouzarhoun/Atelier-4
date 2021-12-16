#include <iostream>
#include <list>
using namespace std;

int main()
{
   list <int> l={3,4,46,2,1,6,93,0};
   list<int>::iterator it=l.begin();
   cout<<"list n'a pas triee:"<<endl;
   for(it =l.begin(); it != l.end(); it++){
   cout<<*it<<" ";
   }
    cout<<endl;
    l.sort();
    cout<<endl;
     cout<<"la liste triee:"<<endl;
     for(it =l.begin(); it != l.end(); it++){
      cout<<*it<<" ";
   }
    return 0;
}