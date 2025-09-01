#include"House.h"
#include<iostream>
using namespace std;

int main() {

	House h1("ALi");
	h1.addRoom("Drawing-Room", 300, "Olive+White", 1);
	h1.addRoom("Kitchen", 200, "White+Brownish", 2);
	h1.addRoom("Bed-Room", 250, "Navy", 2);

	h1.showHouseDetails();
	cout << "Total Area: " << h1.totalArea() << " sq ft" << endl;

	h1.findRoomByType("Kitchen");

	cout << "Total Area of the House:" << h1.totalArea() << endl;

	return 0;
}