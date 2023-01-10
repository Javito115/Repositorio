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

class Instante{
	private:
		int hor, min, seg;
	public:
		void setHorMinSeg(int hora, int minuto, int segundo){
			hor = hora;
			min = minuto;
			seg = segundo;
		}
		
		int getSegundos(){
			return seg;
		}
		int getMinutos(){
			return min;
		}
		int getHoras(){
			return hor;
		}
		
		int segTotales(){
			int total;
			return total = seg + (min*60) + (hor*3600);
		}
		void setSegTotales(int total){
			horas = total/3600;
			min = (total - horas)/60;
			seg = (total-horas-min);
		}
};


int main(){
	Instante inst;
	  
	inst.setHorMinSeg(1, 2, 5);
	
	cout << inst.getSegundos();
	cout << inst.SegTotales();
	
	inst.setSegTotales(3725);
   
}




