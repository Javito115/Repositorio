//////////////////////////////////////////////////////////////////////////
//
// Fundamentos de ProgramaciÃ³n
// ETS InformÃ¡tica y Telecomunicaciones
// Universidad de Granada
// Autor: Javier Ruiz de Valdivia Torres
//
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

double Potencia(double base, int expon){
   /*
   Observe que si exponente fuese cero, la variable pot
   se quedaría con 1,lo que es correcto ya que 
   base elevado a 0 es siempre 1   
   
   Y observe que este comentario va dentro de la función ya que
   es una descripción de la implementación
   */
   
   double pot;
   int expon_positivo;

   if (base == 0 && expon == 0)
      pot = NAN;            // NAN es la cte de indeterminación definida en cmath
   else{
      expon_positivo = abs(expon);
      pot = 1;                                          

      for (int i = 1; i <= expon_positivo; i++)
         pot = pot * base;
   }

   if (expon < 0)
      pot = 1/pot;

   return pot;
}

double Redondea(double real, int num_decim)
{
	double desplazamiento = Potencia(10, num_decim);
	double real_redond = round(real * desplazamiento);  
	real_redond = real_redond / desplazamiento;
	return real_redond;
}

int main(){
	double real, redondeado; 
	int num_decim;
	
	cout << "Round con cualquier número de cifras"
	    << "\nIntroduzca el número real y el número de cifras decimales:\n";
	cin >> real;
	cin >> num_decim;
	
	redondeado = Redondea(real, num_decim);
	
	cout << "\nResultado: " << redondeado << "\n\n";

}


