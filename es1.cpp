#include <iostream>
using namespace std;
int main()
{
    int m1 [2][2];
    int m2 [2][2];
    int m3 [2][2];
    int i;
    int j;
    
    for (i=0; i<2; i++){
        
     for (j=0; j<2; j++){   
        
       std::cin >>  m1 [i][j];
       
       
      
        
    }}
    
    
     for (i=0; i<2; i++){
        
     for (j=0; j<2; j++){   
        
     
        std::cin >> m2 [i][j];
       
      
        
    }}
     
     for (i=0; i<2; i++){
        
     for (j=0; j<2; j++){   
        
      
      
       
       m3[i][j]=  m1 [i][j]*m2 [i][j];
        
    }}
    
    
    
    
    
    
    for (i=0; i<2; i++){
        
     for (j=0; j<2; j++){  
    
   std::cout <<   m3[i][j] << std::endl;
   
   
     }}
    
    
}