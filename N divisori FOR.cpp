//Trovare tutti i numeri primi compresi fra due interi N ed M (estremi compresi)
#include <iostream>
using namespace std;
int main ()
{
    int n, m, countn, countm;
    cout<<"inserisci il primo numero:"<<endl;
    cin>>n;
    cout<<"inserisci il secondo numero:"<<endl;
    cin>>m;
    for (int i=1; i<=n; i++)
    {
        countn=n/i;
        for (int i=1; i<=m; i++)
        {
            countm=m/i;
        }
    }
    system ("pause");
    return 0;
}
