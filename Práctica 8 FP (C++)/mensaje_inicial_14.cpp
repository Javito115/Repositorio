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

void enmarcar(string msj, char car_marco){
	for(int i = 0; i < msj.size(); i++)
	{
		cout << car_marco;
	}
	cout <<"\n" << msj << "\n";
	for(int i = 0; i < msj.size(); i++)
	{
		cout << car_marco;
	}
}


int main(){
   char car_marco, car; 
   const char TERMINADOR = '@';
   string msj, msj_enmarcado;
    
   cout << "Enmarca\n" << "Introduzca un car·cter para enmarcar"
        << "y a continuaciÛn los caracteres del mensaje usando como terminador el car·cter "
        << TERMINADOR <<  "\n";
   
   car_marco = cin.get();
   car = cin.get();
   
   while (car != TERMINADOR){
      msj.push_back(car);
      car = cin.get();
   }
   
   enmarcar(msj, car_marco);
}



