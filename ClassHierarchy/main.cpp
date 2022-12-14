#include <iostream>
#include "Figure.h"


int main() {
	setlocale(LC_ALL, "Ru");
	Figure figure;
	Traingle traingle;
	Rectangular_Traingle ReacTrain;
	Rectangular_Traingle2 ReacTrain2;
	Equilateral_Traingle EquTrain;
	Isosceles_Traingle IsosTrain;
	Quadrilateral Quad;
	Rectangle rectan;
	Square square;
	Parallelogram paral;
	Rhomb rhomb;
	

	print_info(&figure);
	print_info(&traingle);
	print_info(&ReacTrain);
	print_info(&ReacTrain2);
	print_info(&IsosTrain);
	print_info(&EquTrain);
	print_info(&Quad);
	print_info(&rectan);
	print_info(&square);
	print_info(&paral);
	print_info(&rhomb);
	
}
