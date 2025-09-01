#include "Rooms.h"
Rooms::Rooms() {
    //cout << "Room (default constructor) called." << endl;
}

Rooms::Rooms(string type, int size, string col, int floor) {
    roomType = type;
    area = size;
    color = col;
    floorNumber = floor;
}

void Rooms::setRoom(string type, int size, string col, int floor) {
    roomType = type;
    area = size;
    color = col;
    floorNumber = floor;
}

void Rooms::showRoomDetails() const {
    cout << "Room Type: " << roomType
        << ", Area: " << area << " sq ft"
        << ", Color: " << color
        << ", Floor: " << floorNumber << endl;
}

void Rooms::paintRoom(string newColour) {
    color = newColour;
}

void Rooms::updateRoom(string type, int size, string col, int floor) {
    roomType = type;
    area = size;
    color = col;
    floorNumber = floor;
}

int Rooms::getArea()const {
    return area;
}

string Rooms::getType()const {
    return roomType;
}

string Rooms::getColor() const{
     return color;
}
