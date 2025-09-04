#include "ParkingLot.h"

ParkingLot::ParkingLot(int maxCapacity)
    : maxCapacity(maxCapacity), currentCount(0) {}

ParkingLot::~ParkingLot() {
    for (auto vehicle : vehicles) {
        delete vehicle;
    }
}

int ParkingLot::getCount() const {
    return currentCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount < maxCapacity) {
        vehicles.push_back(vehicle);
        currentCount++;
    } else {
        std::cout << "The lot is full." << std::endl;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == id) {
            delete *it;
            vehicles.erase(it);
            currentCount--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot." << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (const auto& vehicle : vehicles) {
        if (vehicle->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}