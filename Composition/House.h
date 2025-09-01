#pragma once
#include"Rooms.h"

class House
{
protected:
    string ownerName;
    Rooms rooms [10];  
    int roomCount;
public:
    House(string owner);
    void addRoom(string type, int size, string color, int floor);
    void showHouseDetails() const;
    int totalArea() const;
    void largestRoom() const;
    void findRoomByType(string type) const;
   
};

