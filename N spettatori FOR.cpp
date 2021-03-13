//Ad uno spettacolo hanno partecipato N spettatori. Inserire per ciascuno l'età e dire alla fine quanti erano minorenni, quanti adulti (>18 e < 65) e quanti anziani (> 65)

#include <iostream>
using namespace std;
int main ()
{
    int eta, m, a, v, n, k;
    cout<<"quanti spettatori hanno partecipato?: "<<endl;
    cin>>n;
    for (k=1; k>=1; k=k+1)
    {
        cout<<"inserisci l'eta dello spettatore:"<<endl;
        cin>>eta;
        if (eta>=18)
        {
            if (eta>=65)
            {
                v=v+1;
            }
            else
            {
                a=a+1;
            }
        }
        else
        {
            m=m+1;
        }
    }
    cout<<"MINORENNI: "<<m<<endl;
    cout<<"ADULTI: "<<a<<endl;
    cout<<"ANZIANI: "<<v<<endl;
    system ("pause");
    return 0;
}
