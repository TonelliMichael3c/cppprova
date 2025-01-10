#include <iostream>
using namespace std;
int main()
{int m[3][3];
int i;
int j;
int somma=0;
int max=0;


   for( i=0;i<3;i++)
{
for( j=0;j<3;j++)
{
    std::cout << "inserisci il numero" << std::endl;
 std::cin >>m[i][j];
 somma = somma+m[i][j];
 if (max<m[i][j]){max=m[i][j];}
 
 
}}

std::cout << somma << std::endl;
std::cout << max << std::endl;

}