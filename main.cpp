#include <iostream>
using namespace std;

int main() {
  int contadorbucle, contadormora, sumatoria;
  float precio;
	string tipo;
	contadorbucle = 0;
	contadormora =0;
	sumatoria = 0;

  while (contadorbucle < 5){
    cout << "Ingrese el precio de la Guagua de pan N° "<<contadorbucle + 1 << ":" << endl;
		cin >> precio;
		cout << "LA GUAGUA DE PAN ES DE MORA: SI O NO" << endl;
		cin >> tipo;
    if (tipo == "si"){
      contadormora = contadormora + 1;
    }
    sumatoria =sumatoria + 1;
		contadorbucle = contadorbucle + 1;
  }
  cout << "El total a pagar por la Guaguas es de: $"<< sumatoria;
	cout << "El numero de Guaguas de Pan de mora son: "<< contadormora;
}
// para limpiar pantalla 