#include <iostream>
#include <vector>
using namespace std;
int main() {
	// 1. Creamos un contenedor (vector) con algunos elementos
	vector<int> numeros = {10, 20, 30, 40, 50};
	
	cout << "Recorriendo el vector con un iterador estándar:" << endl;
	
	// 2. Usamos un iterador para recorrer desde el principio hasta el final
	for (auto it = numeros.begin(); it != numeros.end(); ++it) {
		// 3. Usamos el operador de desreferencia (*) para obtener el valor al que apunta el iterador
		cout << *it << " ";
	}
	
	cout << endl;
	return 0;
}
