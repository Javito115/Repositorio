//////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Autor: Javier Ruiz de Valdivia Torres
//
//////////////////////////////////////////////////////////////////////////

int Max2(int n1, int n2){
	if(n1 > n2)
		return n1;
	else
		return n2;
}

int Max3(int n1, int n2, int n3){
	int n4 = Max2(n1, n2);
	if(n3 > n4)
		return n3;
	else
		return n4;
}

#include <iostream>
using namespace std;

int main(){
	int n1, n2, n3, nt;
	
	cout << "\nIntroduzca 3 numeros: ";
	cin >> n1 >> n2 >> n3;
	
	nt = Max3(n1, n2, n3);
	
	cout << "\nEl mayor es: " << nt;

}


