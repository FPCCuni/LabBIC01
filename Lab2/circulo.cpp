// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float area;
	float perimetro;
	float pi;
	float radio;
	// Datos
	cout << "Ingrese el valor del radio: " << endl;
	cin >> radio;
	// Procesamiento
	perimetro = 2*M_PI*radio;
	area = M_PI*pow(radio,2);
	// Resultados
	cout << "El area del circulo es: " << area << endl;
	cout << "El perimetro del circulo es: " << perimetro << endl;
	return 0;
}

