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

string LeeString(char ter){
	string cad;
	char car;
	
	car = cin.get();
	
	while(car != ter){
		cad.push_back(car);
		car = cin.get();
	}
	
	return cad;
}

string EliminaUltimos(string cad, char a_borrar){
	int ultimo = cad.size() - 1;
	
	while(cad[ultimo] == a_borrar){
		cad.erase(ultimo);
		ultimo--;
	}
}

int main(){
	const char TERMINADOR = '#';
	char car, a_borrar;
	string original, eliminados;
	
	cout << "\nIntroduzca caracteres: ";
	
	original = LeeString(TERMINADOR);
	
	cout << "\nIntroduzca caracteres a borrar: ";
	cin >> a_borrar;
	
	eliminados = EliminaUltimos(original, a_borrar);
	cout << eliminados;

}


