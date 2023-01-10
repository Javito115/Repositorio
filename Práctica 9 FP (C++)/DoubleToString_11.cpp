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

double Redondea(double real, int num_dec){
	double desplazamiento, real_re;
	int max_dec = 6;
	
	if (max_dec < num_dec){
		num_dec = max_dec;
	}
	desplazamiento = pow(10, num_dec);
	real_re = round(real * desplazamiento);
	real_re = real_re / desplazamiento;
	
	return real_re;
}

string EliminaUltimos(string cad, char a_borrar){
	int ultimo = cad.size() - 1;
	
	while(cad[ultimo] == a_borrar){
		cad.erase(ultimo);
		ultimo--;
	}
}

string DoubleToString(double real, int num_dec){
	string cad;
	
	real = Redondea(real, num_dec);
	cad = to_string(real);
	cad = EliminaUltimos(cad, '0');
	
	return cad;
}

int main(){
	double real;
	int num_dec;
	string cad;
	
	cout << "\nIntroduzca el numero real y los decimales a redondear: ";
	cin >> real;
	cin >> num_dec;
	
	cad = DoubleToString(real, num_dec);
	cout << cad;

}


