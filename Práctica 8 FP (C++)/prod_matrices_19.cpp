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

int main(){
	const int MAX_FIL_IZDA = 10, MAX_COL = 10;
   const int MAX_FIL_DCHA = MAX_COL, MAX_COL_DCHA = 30;
   
   int util_fil_izda, util_col_izda;
   int util_fil_dcha, util_col_dcha;
   int util_fil_prod, util_col_prod;  // util_fil y util_col para cada matriz
   
   int izda[MAX_FIL_IZDA][MAX_COL], dcha[MAX_FIL_DCHA][MAX_COL_DCHA], prod[MAX_FIL_IZDA][MAX_COL];

   cin >> util_fil_izda;
   cin >> util_col_izda;

   for (int i = 0; i < util_fil_izda; i++)
      for (int j = 0; j < util_col_izda; j++)
         cin >> izda[i][j];

   util_fil_dcha = util_col_izda;
   cin >> util_col_dcha;

   for (int i = 0; i < util_fil_dcha; i++)
      for (int j = 0; j < util_col_dcha; j++)
         cin >> dcha[i][j];
         
         
         
	for (int i = 0; i < util_fil_izda; i++)
		for (int j = 0; j < util_col_dcha; j++)
			prod[i][j] = 0;
         
   for(int i=0; i<util_fil_izda; ++i)
        for(int j=0; j<util_col_dcha; ++j)
            for(int z=0; z<util_col_izda; ++z)
                prod[i][j] += izda[i][z] * dcha[z][j];
                
	util_fil_prod = util_fil_izda;
	util_col_prod = util_col_dcha;
   
   cout << "\n\n";
   cout << "Matriz prod:\n";
   
   for (int i=0; i<util_fil_prod; i++){
      cout << "\n";
      
      for (int j=0; j<util_col_prod; j++)
         cout << prod[i][j] << '\t';
   }  
  
   cout << "\n\n";


}


