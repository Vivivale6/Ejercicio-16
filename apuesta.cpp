#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;


void apuesta(int po_i=100, int* t_total, int* max, int a);


void apuesta(int po_i=100, int* t_total, int* max, int a){
  int i;
  int step;
  int maximo=0;
  int posicion = po_i;
  srand(a);
  i = 0;
  while(posicion>0){
    step = rand()%3 -1;
    posicion += step;
    if(maximo<posicion){
      maximo=posicion;
      }
        
   i++; 
  }
  *max= maximo
  *t_total = i;  
    
 }



int main(){
  int j;
  int t;
  int max;
  for (j=0; j<1001;j++){
    apuesta(100,&t,&max,j);
    cout<<max <<""<< t << endl;
  }
    
      
  return 0;
}
