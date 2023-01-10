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

int LeeIntMayorIgual(int n){
	int max;
	cout << "\nIntroduzca un max: ";
	cin >> max;
	
	while(max <= n)
	{
		cout << "\nIntroduzca un max: ";
		cin >> max;
	}
	
	return max;
}

int LeeIntRango(int min, int max){
	int mid;
	cout << "\nIntroduzca un numero mid: ";
	cin >> mid;
	
	while(mid < min && mid > max)
	{
		cout << "\nIntroduzca un numero mid: ";
		cin >> mid;
	}
	
	return mid;
}

int main(){
	int min, max, mid;
	
	cout << "\nIntroduzca un numero min: ";
	cin >> min;
	
	max = LeeIntMayorIgual(min);
	mid = LeeIntRango(min, max);
	
	cout << "\El numero medio es: " << mid;

}


