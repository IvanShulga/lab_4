#include "Header.h"

void createArrayCyllinders() {

	int amountCylinders = 0;

	do {

		cout << "Number of cylinders(>0): ";
		cin >> amountCylinders;

		if (amountCylinders <= 0)
			cout << endl << "Wrong value! Try again" << endl << endl;

	} while (amountCylinders <= 0);

	int choice = 0;

	do {

		cout << "Are you want enter all values by program (enter 1) or by yourself (enter 2): ";
		cin >> choice;

		if (choice < 1 || choice > 2)
			cout << endl << "Wrong value! Try again" << endl << endl;

	} while (choice < 1 || choice > 2);

	TCylinder* cylinders;
	cylinders = new TCylinder[amountCylinders];

	initializingCyllinders(cylinders, amountCylinders, choice);

	showCylinders(cylinders, amountCylinders);

	find_Max_Volume_Cylinder(cylinders, amountCylinders);

	delete[] cylinders;

}

void showCylinders(TCylinder* cylinders, int amountCylinders) {

	cout << endl << "Cylinders:" << endl;

	for (int i = 0; i < amountCylinders; i++)

		cout << i + 1 << "-cylinder: radius = " << cylinders[i].getRadius() << "  height = " << cylinders[i].getHeight()
		<< "  surface area = " << cylinders[i].getSurfaceArea() << "  volume = " << cylinders[i].getVolume() << endl;

}

void initializingCyllinders(TCylinder* cylinders, int amountCylinders, int choice) {

	if (choice == 1)
		
		for (int i = 0; i < amountCylinders; i++) {

			cylinders[i].setRadius(i + (double)1);
			cylinders[i].setHeight(i + (double)1);

		}

	else {

		float radius = 0, height = 0;

		for (int i = 0; i < amountCylinders; i++) {

			cout << "Enter radius for " << i + 1 << "-cylinder: ";
			cin >> radius;
			cylinders[i].setRadius(radius);

			cout << "Enter height for " << i + 1 << "-cylinder: ";
			cin >> height;
			cylinders[i].setHeight(height);

		}

	}

}

void find_Max_Volume_Cylinder(TCylinder* cylinders, int amountCylinders) {

	int maxVolumeInd = 0;

	TCylinder* maxVolume = &cylinders[0];

	for (int i = 1; i < amountCylinders; i++)
		if (cylinders[i].getVolume() > maxVolume->getVolume()) {

			maxVolume = &cylinders[i];
			maxVolumeInd = i;

		}

	cout << "---------------------------------------------------------------" << endl << "Cylinder with biggest volume is "
		<< maxVolumeInd + 1 << " and volume = " << maxVolume->getVolume() << endl;

}


void createArrayPyramides() {

	int amountPyramides = 0;

	do {

		cout << "Number of pyramides(>0): ";
		cin >> amountPyramides;

		if (amountPyramides <= 0)
			cout << endl << "Wrong value! Try again" << endl << endl;

	} while (amountPyramides <= 0);

	int choice = 0;

	do {

		cout << "Are you want enter all values by program (enter 1) or by yourself (enter 2): ";
		cin >> choice;

		if (choice < 1 || choice > 2)
			cout << endl << "Wrong value! Try again" << endl << endl;

	} while (choice < 1 || choice > 2);


	TPyramid* pyramides;
	pyramides = new TPyramid[amountPyramides];

	initializingPyramides(pyramides, amountPyramides, choice);

	showPyramides(pyramides, amountPyramides);

	find_Min_Surf_Area_Pyramid(pyramides, amountPyramides);

	cout << endl;

	delete[] pyramides;

}

void showPyramides(TPyramid* pyramides, int amountPyramides) {

	cout << endl << "Pyramids:" << endl;

	for (int i = 0; i < amountPyramides; i++)

		cout << i + 1 << "-pyramid: base area = " << pyramides[i].getBaseArea() << "  heigth = " << pyramides[i].getHeight()
		<< "  apothema = " << pyramides[i].getApothema() << "  base perimetr = " << pyramides[i].getBasePerimetr()
		<< "  surface area = " << pyramides[i].getSurfaceArea() << "  volume = " << pyramides[i].getVolume() << endl;

}

void initializingPyramides(TPyramid* pyramides, int amountPyramides, int choice) {

	if (choice == 1) 

		for (int i = 0; i < amountPyramides; i++) {

			pyramides[i].setBaseArea(i + (double)1);
			pyramides[i].setHeight(i + (double)1);
			pyramides[i].setBasePerimetr(i + (double)1);
			pyramides[i].setApothema(i + (double)1);

		}

	else {

		float baseArea = 0, height = 0, basePerimetr = 0, apothema = 0;

		for (int i = 0; i < amountPyramides; i++) {

			cout << "Enter base area for " << i + 1 << "-pyramide: ";
			cin >> baseArea;
			pyramides[i].setBaseArea(baseArea);

			cout << "Enter height for " << i + 1 << "-pyramide: ";
			cin >> height;
			pyramides[i].setHeight(height);

			cout << "Enter base perimetr for " << i + 1 << "-pyramide: ";
			cin >> basePerimetr;
			pyramides[i].setBasePerimetr(basePerimetr);

			cout << "Enter apothema for " << i + 1 << "-pyramide: ";
			cin >> apothema;
			pyramides[i].setApothema(apothema);

		}

	}

}

void find_Min_Surf_Area_Pyramid(TPyramid* pyramides, int amountPyramides) {

	int minSurfaceAreaInd = 0;

	TPyramid* minSurfaceArea = &pyramides[0];

	for (int i = 1; i < amountPyramides; i++)

		if (pyramides[i].getSurfaceArea() < minSurfaceArea->getSurfaceArea()) {

			minSurfaceArea = &pyramides[i];
			minSurfaceAreaInd = i;

		}

	cout << "---------------------------------------------------------------" << endl << "Pyramide with smallest surface area is "
		<< minSurfaceAreaInd + 1 << " and surface area = " << minSurfaceArea->getSurfaceArea() << endl;

}
