// Trova tutti i numeri primi compresi tra 1 e N
//
#include <iostream>
using namespace std;
int main()
{
    int n,trovato, primo, r;
    primo=0;
    cout<<"Numero Estremo: ";
    cin>>n;
    for(int k=1; k<=n; k++)
    {
               trovato=0;
               for(int z=2; z<=k-1; z++)
               {
                 r=k%z;
                 if(r==0)
                 {
                    trovato=1;
                 }
               }
               if(trovato==0)
               {
                  cout<< "Numero Primo: "<<k<<endl;
                  primo=primo+1;
               }
    }
    cout<<"tot numeri primi: "<<primo<<endl;
    system ("pause");
    return 0;
}
