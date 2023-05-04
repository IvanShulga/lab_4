#include "Header.h"


double TPyramid::getSurfaceArea() {

	this->surfaceArea = (0.5 * this->basePerimetr * this->apothema + this->baseArea);

	return surfaceArea;

}
double TPyramid::getVolume() {

	this->volume = ((double)0.33 * this->baseArea * this->height);

	return volume;

}

double TPyramid::getHeight() { return this->height; }
double TPyramid::getApothema() { return this->apothema; }
double TPyramid::getBaseArea() { return this->baseArea; }
double TPyramid::getBasePerimetr() { return this->basePerimetr; }
void TPyramid::setHeight(double height) { this->height = height; }
void TPyramid::setApothema(double apothema) { this->apothema = apothema; }
void TPyramid::setBaseArea(double baseArea) { this->baseArea = baseArea; }
void TPyramid::setBasePerimetr(double basePerimetr) { this->basePerimetr = basePerimetr; }


double TCylinder::getSurfaceArea() {

	this->surfaceArea = 2 * Pi * this->radius * this->height + 2 * Pi * this->radius * this->radius;

	return this->surfaceArea;

}
double TCylinder::getVolume() {

	this->volume = Pi * this->radius * this->radius * this->height;

	return this->volume;

}

double TCylinder::getHeight() { return this->height; }
double TCylinder::getRadius() { return this->radius; }
void TCylinder::setHeight(double height) { this->height = height; }
void TCylinder::setRadius(double radius) { this->radius = radius; }
