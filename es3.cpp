
#include <iostream>;
using namespace std;
int main()
{
    int matrice[2][2];
    int r;
    int c;
   
    for (r=0;r<2;r++){
        for (c=0;c<2;c++){


cout << "inserisci il numero" << endl;


cin >> matrice[r][c];


if (matrice[r][c]==3){
    cout << "il numero 3 è presente"<< endl;
    cout << "il numero 3 si trova nella riga" << r << "e nella colonna" << c <<endl;
    
    
     }


else {
    cout << "il numero non è presente" << endl;
}


}
        }
    }
