//asciiart.cpp
//Chuluuunbat Purev
//2019-11-24
//Print ascii of a ppm image

#include "Color3.hpp";
#include "Image3.hpp";
#include <fstream>

int main() {

	Image3 a(80, 80);

	a.loadPPM("parrot.ppm");

	a.savePPM("asd.txt");

	return 0;
}