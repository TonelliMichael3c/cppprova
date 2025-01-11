#include <iostream>
using namespace std;
int main()
{

    int m1 [3][3];
    int i;
    int j;
    int p;

for (i=0; i<3; i++){
        
     for (j=0; j<3; j++){   
        
       std::cin >>  m1 [i][j];
     if(i=j){p=p*m1[i][j]}
     
     
     }}


std::cout << "il prodotto degli elementi della diagonale è:" << p << std::endl;

}