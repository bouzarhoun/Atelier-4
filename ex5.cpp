#include<iostream>
#include<set>
#include<list>
#include<vector>
using namespace std;
    set<int> myset;
    set<int>::iterator itr;
    bool recherche(int a)    
    {
        for (itr = myset.begin(); itr != myset.end(); itr++)
        {   
            if(a==*itr){return true;}; 
        }
        return false;
    };
    
int main()
{
    int i;
    for ( i = 1; i < 101; i++)
    {
        myset.insert(i);
    }
    cout<<recherche(3)<<endl;
    cout<<recherche(39)<<endl;
    cout<<recherche(102)<<endl;
    cout<<recherche(500)<<endl;
};