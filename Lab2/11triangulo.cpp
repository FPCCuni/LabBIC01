// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float area;
	float d1;
	float d2;
	float d3;
	float perimetro;
	float s;
	float x1;
	float x2;
	float x3;
	float y1;
	float y2;
	float y3;
	cout << "Ingrese las cordenas del punto P1(x1,y1): " << endl;
	cin >> x1 >> y1;
	cout << "Ingrese las cordenas del punto P2(x2,y2): " << endl;
	cin >> x2 >> y2;
	cout << "Ingrese las cordenas del punto P3(x3,y3): " << endl;
	cin >> x3 >> y3;
	d1 = sqrtf(pow((x2-x1), 2)+pow((y2-y1), 2));
	d2 = sqrtf(pow((x3-x2), 2)+pow((y3-y2), 2));
	d3 = sqrtf(pow((x3-x1), 2)+pow((y3-y1), 2));
	perimetro = d1+d2+d3;
	s = perimetro/2;
	area = sqrtf(s*(s-d1)*(s-d2)*(s-d3));
	// Salida
	cout << "El área del trinagulo es: " << area << endl;
	cout << "El perímetro del triangulo es: " << perimetro << endl;
	return 0;
}

