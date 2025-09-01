#include "House.h"
House::House(string owner) {
	ownerName = owner;
	roomCount = 0;
}

void House::addRoom(string type, int size, string color, int floor) {
    if (roomCount < 10) {
        rooms[roomCount].setRoom(type, size, color, floor);
        roomCount++;
    }
    else {
        cout << "No more rooms can be added!" << endl;
    }
}

void House::showHouseDetails() const {
    cout << ownerName << "'s House has " << roomCount << " rooms:" << endl;
    for (int i = 0; i < roomCount; i++) {
        rooms[i].showRoomDetails();
    }
}

int House::totalArea() const {
    int sum = 0;
    for (int i = 0; i < roomCount; i++) {
        sum += rooms[i].getArea();
    }
    return sum;
}

void House::largestRoom() const {
    if (roomCount == 0) {
        cout << "No rooms available." << endl;
        return;
    }
    int maxIndex = 0;
    for (int i = 1; i < roomCount; i++) {
        if (rooms[i].getArea() > rooms[maxIndex].getArea()) {
            maxIndex = i;
        }
    }
    cout << "Largest Room: ";
    rooms[maxIndex].showRoomDetails();
}

void House::findRoomByType(string type) const {
    bool found = false;
    for (int i = 0; i < roomCount; i++) {
        if (rooms[i].getType() == type) {
            cout << "Found Room -> ";
            rooms[i].showRoomDetails();
            found = true;
        }
    }
    if (!found) {
        cout << "No room of type " << type << " found." << endl;
    }
}


