//////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Autor: Javier Ruiz de Valdivia Torres
//
//////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAM = 100;
		char caracteres[TAM];
		int util_caracteres = 0;
	public:
		void Aniade(char dato){
			caracteres[util_caracteres] = dato;
			util_caracteres++;
		}
		int Utilizados(){
			return util_caracteres;
		}
		char Elemento(int pos){
			return caracteres[pos];
		}
		int PrimeraOcurrencia(char dato){
			int salida = -1;
			for(int i = 0; i < util_caracteres; i++){
				if(dato == caracteres[i])
				{
					salida = i;
					i = util_caracteres;
				}
			}
			return salida;
		}
		void EliminaOcurrencias(char dato){
			char caracteres2[TAM];
			int util_caracteres2 = 0;
			for(int i = 0; i < util_caracteres; i++){
				if(dato == caracteres[i])
				{
					caracteres2[util_caracteres2] = caracteres[i];
					util_caracteres2++;
				}
			}
			
			for(int i = 0; i < util_caracteres2; i++)
			{
				caracteres[i] = caracteres2[i];
			}
		}
	
};


int main(){
	SecuenciaCaracteres cadena;
	
	cadena.Aniade('a');
	cout << cadena.Utilizados();
	cadena.EliminaOcurrencias('a');  
   
}




