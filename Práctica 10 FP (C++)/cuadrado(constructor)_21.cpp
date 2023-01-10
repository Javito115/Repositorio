//////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programaci√≥n
// ETS Inform√°tica y Telecomunicaciones
// Universidad de Granada
// Autor: Javier Ruiz de Valdivia Torres
//
//////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Cuadrado{
	private:
		double x, y, lado;
	public:
		Cuadrado(double abcisa, double ordenada, double lado_cu){
			if(lado_cu > 0)
			{
				x = abcisa;
				y = ordenada;
				lado = lado_cu;
			}
			else{
				x = -1;
				y = -1;
				lado = -1;
			}
			
		}
		double getAbcisa(){
			return x;
		}
		double getOrdenada(){
			return y;
		}
		double getLado(){
			return lado;
		}
};


int main(){  
   const string MSJ_COORDENADAS = "\nCoordenadas: ";
   const string MSJ_LONGITUD = "\nLongitud: ";
   const string MSJ_AREA = "\n¡rea: ";
   const string MSJ_PERIMETRO = "\nPerÌmetro: ";
   double esquina_x, esquina_y, long_parcela;
   double perimetro1, perimetro2, area1, area2;

   cout << "Introduzca los datos de dos cuadrados:"
        << "\nEn primer lugar las dos coordenadas de la esquina inferior izquierda"
        << "\nA continuaciÛn la longitud de su lado\n";   
           
   // ----------------------------------------------------
   cin >> esquina_x;   
   cin >> esquina_y;   
   cin >> long_parcela;
   
   Cuadrado parcela(esquina_x, esquina_y, long_parcela);
	   
   cin >> esquina_x;   
   cin >> esquina_y;   
   cin >> long_parcela;
   
    Cuadrado otra_parcela(esquina_x, esquina_y, long_parcela);
	
   // ----------------------------------------------------
   
	area1 = parcela.getLado() * parcela.getLado();
	perimetro1 = parcela.getLado() * 4;	   
  
   cout << MSJ_COORDENADAS <<  parcela.getAbcisa() << " " << parcela.getOrdenada()
        << MSJ_LONGITUD <<    parcela.getLado()
        << MSJ_AREA <<         area1
        << MSJ_PERIMETRO <<    perimetro1;
   
   cout << "\n";
   
	area2 = otra_parcela.getLado() * otra_parcela.getLado();
	perimetro2 = otra_parcela.getLado() * 4;	

   cout << MSJ_COORDENADAS <<  otra_parcela.getAbcisa() << " " << otra_parcela.getOrdenada()
        << MSJ_LONGITUD <<     otra_parcela.getLado()
        << MSJ_AREA <<         area2
        << MSJ_PERIMETRO <<    perimetro2;
}


/*
3.4  5.7  2.9
-5.6 -4.1 1.8
*/
/*
Coordenadas: 3.4 , 5.7
Longitud: 2.9
¡rea: 8.41
PerÌmetro: 11.6

Coordenadas: -5.6 -4.1
Longitud: 1.8
¡rea: 3.24
PerÌmetro: 7.2 
*/



