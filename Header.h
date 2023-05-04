#include <iostream>
#include <string>

#define Pi 3.14

using namespace std;

class TFigure {

protected:
	double surfaceArea;
	double volume;

public:
	virtual double getSurfaceArea() = 0;
	virtual double getVolume() = 0;

	TFigure() {

		this->surfaceArea = 0;
		this->volume = 0;

	}

};

class TPyramid : public TFigure {

protected:
	double height;
	double apothema;
	double baseArea;
	double basePerimetr;

public:
	double getSurfaceArea() override;
	double getVolume() override;

	void setHeight(double height);
	void setApothema(double apothema);
	void setBaseArea(double baseArea);
	void setBasePerimetr(double basePerimetr);
	double getHeight();
	double getApothema();
	double getBaseArea();
	double getBasePerimetr();

	TPyramid() : TFigure () {

		this->baseArea = 0;
		this->height = 0;
		this->basePerimetr = 0;
		this->apothema = 0;

	}

};

class TCylinder : public TFigure {

protected:
	double height;
	double radius;

public:
	double getSurfaceArea() override;
	double getVolume() override;

	void setRadius(double radius);
	void setHeight(double height);
	double getHeight();
	double getRadius();

	TCylinder() : TFigure() {

		this->radius = 0;
		this->height = 0;

	}

};

void createArrayCyllinders();
void showCylinders(TCylinder* cylinders, int amountCylinders);
void initializingCyllinders(TCylinder* cylinders, int amountCylinders, int choice);
void find_Max_Volume_Cylinder(TCylinder* cylinders, int amountCylinders);

void createArrayPyramides();
void showPyramides(TPyramid* pyramides, int amountPyramides);
void initializingPyramides(TPyramid* pyramides, int amountPyramides, int choice);
void find_Min_Surf_Area_Pyramid(TPyramid* pyramides, int amountPyramides);
