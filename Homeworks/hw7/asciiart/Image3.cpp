// Image3.hpp
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#include "Image3.hpp"
#include <fstream>;
#include <string>;
#include <sstream>;

// Image3 Constructor
Image3::Image3(unsigned int width, unsigned int height) {
	// TODO: resize the pixels array
	// TODO: initialize the internal w and h members
	pixels.resize(width * height);
	w = width;
	h = height;
}

// Return a pixel from the image
const Color3& Image3::getPixel(unsigned x, unsigned y) const {
	// TODO: Add error handling for unknown pixels
	Color3 a;
	if ((w * y + x) > pixels.size()) return a;
	// TERRIBLE OPTION 1: throw
	// BETTER OPTION 2: return a color
	// Hint: maybe this is already in the class?

	return pixels[(y * w) + x];
}

void Image3::setPixel(unsigned x, unsigned y, const Color3& color) {
	// TODO: Set the pixel to the new color
	pixels[(y * w) + x] = color;
}

//Save ascii to file
//Call << operator
bool Image3::savePPM(const std::string& path) const {
	// TODO: Save the image to the disk
	// REQUIREMENT: Use the STREAM operators for the file contents

	std::ofstream fout(path);
	if (!fout) return false;

	fout << *this;

	fout.close();

	return true;
}

//Load the ppm file
//Call >> operator
bool Image3::loadPPM(const std::string& path) {
	// TODO: Load an image from the disk
	// REQUIREMENT: Use the STREAM operators for the file contents
	std::ifstream fin(path);

	if (!fin) {
		std::cout << "Error opening file."; return false;
	}

	fin >> *this;

	return true;

}

//Set stream to the ASCII
void Image3::printASCII(std::ostream& ostr) const {
	// TODO: Print an ASCII version of this image
	for (auto i = 0; i < pixels.size(); i++) {
		ostr << pixels[i].asciiValue();
		if (i != 0 && (i % w) == 0)
			ostr << "\n";
	}
}

// STREAM OPERATORS for IMAGE3 class

//Print ascii value
//New line everytime width is reached
std::ostream& operator<<(std::ostream& ostr, const Image3& image) {
	// TODO: Write out PPM image format to stream
	// ASSUME FORMAT WILL BE GOOD
	for (auto i = 0; i < image.pixels.size(); i++) {
		ostr << image.pixels[i].asciiValue();
		if (i != 0 && (i % image.w) == 0)
			ostr << "\n";
	}
	return ostr;
}

//The ppm file must be in right format
//There are 3 values going in sequential order
//Put those in new color and in the vector
std::istream& operator>>(std::istream& istr, Image3& image) {
	// TODO: Read in PPM image format from stream
	// MAKE SURE FORMAT IS GOOD!!!
	std::string c;
	std::istringstream iss;
	int n = 0, i = 0, j = 0;
	int r, g, b;
	Color3 a;

	while (true) {
		iss.clear();
		std::getline(istr, c);
		if (!istr)
			break;
		iss.str(c); 
		iss >> n;

		if (i == 0) r = n;
		if (i == 1) g = n;

		if (i == 2) {
			a.r = r;
			a.g = g;
			a.b = n;
			i = -1;
			image.pixels[j] = a;
			j++;
		}
		i++;
	}
	return istr;
}