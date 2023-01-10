//////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Autor: Javier Ruiz de Valdivia Torres
//
//////////////////////////////////////////////////////////////////////////

#include <iostream>  
#include <cmath> 
using namespace std; 


double calc_edp(double precio_ini, double precio_fin, double demanda_ini, double demanda_fin){
	return  abs((demanda_fin - demanda_ini) / demanda_ini) / abs((precio_fin - precio_ini) / precio_ini);
}
                             

int main(){
   double precio_ini, precio_fin;
   double demanda_ini, demanda_fin;
   double elast_pd;
   
   cout << "C�lculo de la Elasticidad Precio-Demanda.\n\n"
        << "Introduzca cuaternas de valores:"
        << "El precio inicial, el precio final, la demanda inicial y la demanda final.\n"
        << "Introduzca cualquier negativo en el precio inicial para terminar\n\n";
   
   cin >> precio_ini;
   
   while (precio_ini >= 0){
      cin >> precio_fin;       
      cin >> demanda_ini;
      cin >> demanda_fin;
      
      
      elast_pd = calc_edp(precio_ini, precio_fin, demanda_ini, demanda_fin);

      cout << "Elasticidad Precio-Demanda: " << elast_pd << "\n";      
      cin >> precio_ini;
   }
}



