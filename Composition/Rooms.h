#pragma once
#include<iostream>
#include<string>
using namespace std;
class Rooms
{
protected:
	string roomType;
	int area;
	string color;
	int floorNumber;
public:
	Rooms();  
	Rooms(string type, int size, string col, int floor);

	void setRoom(string type, int size, string col, int floor);
	void showRoomDetails() const;
	void paintRoom(string newColor);
	void updateRoom(string type, int size, string col, int floor);

	int getArea() const;
	string getType() const;
	string getColor() const;
};

