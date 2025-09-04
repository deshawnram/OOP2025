#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
protected:
    int ID;
    std::time_t timeOfEntry;

public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() const = 0; // Pure virtual function
    virtual ~Vehicle() {}
};

#endif
