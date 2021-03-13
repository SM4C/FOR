#include <iostream>
using namespace std;
int main ()
{
    int n, max = 0;
    float media, voto, s;
    string nome, maxp;
    cout<<"quanti sono gli studendi?: "<<endl;
    cin>>n;
    for (int k=1; k<=n; k=k+1)
    {
        cout<<"voto= ";
        cin>>voto;
        cout<<"nome= ";
        cin>>nome;
        s=s+voto;
        if (voto>max)
        {
            max=voto;
            maxp=nome;
        }
    }
    media=s/n;
    cout<<"Media= "<<media<<endl;
    cout<<"Max= "<<max<<endl;
    cout<<"persona più brava= "<<maxp<<endl;
    system ("pause");
    return 0;
}
