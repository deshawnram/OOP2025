#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>
#include <iostream>

class ParkingLot {
private:
    int maxCapacity;
    int currentCount;
    std::vector<Vehicle*> vehicles;

public:
    ParkingLot(int maxCapacity);
    ~ParkingLot();
    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif