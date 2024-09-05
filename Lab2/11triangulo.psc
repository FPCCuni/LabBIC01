Algoritmo triangulo
	Definir x1, y1, x2,y2, x3, y3, d1, d2, d3, area, perimetro, s Como Real;
	
	Escribir "Ingrese las cordenas del punto P1(x1,y1): ";
	Leer x1, y1;
	
	Escribir "Ingrese las cordenas del punto P2(x2,y2): ";
	Leer x2, y2;
	
	Escribir "Ingrese las cordenas del punto P3(x3,y3): ";
	Leer x3, y3;
	
	d1 = RC((x2-x1)^2 + (y2-y1)^2);
	d2 = RC((x3-x2)^2 + (y3-y2)^2);
	d3 = RC((x3-x1)^2 + (y3-y1)^2);
	
	perimetro = d1 +d2 + d3;
	
	s = perimetro/2;
	
	area = RC(s*(s-d1)*(s-d2)*(s-d3));
	
	//Salida
	
	Escribir "El área del trinagulo es: ", area;
	Escribir "El perímetro del triangulo es: ", perimetro;
	
	
FinAlgoritmo
