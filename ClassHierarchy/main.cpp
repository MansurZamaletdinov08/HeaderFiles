#include <iostream>
#include "Print_info.h"
#include "Figure.h"
#include "Traingle.h"
#include "ReacTrain.h"
#include "ReacTrain2.h"
#include "IsoTrain.h"
#include "EquTrain.h"
#include "Quad.h"
#include "Rectangle.h"
#include "Square.h"
#include "Paral.h"
#include "Rhomb.h"



int main() {
	setlocale(LC_ALL, "Ru");
	Figure figure;
	Traingle traingle;
	Rectangular_Traingle ReacTrain;
	Rectangular_Traingle2 ReacTrain2;
	Isosceles_Traingle IsoTrain;
	Equilateral_Traingle EquTrain;
	Quadrilateral Quad;
	Rectangle rectan;
	Square square;
	Parallelogramm paral;
	Rhomb rhomb;

	print_info(&figure);
	print_info(&traingle);
	print_info(&ReacTrain);
	print_info(&ReacTrain2);
	print_info(&IsoTrain);
	print_info(&EquTrain);
	print_info(&Quad);
	print_info(&rectan);
	print_info(&square);
	print_info(&paral);
	print_info(&rhomb);
}