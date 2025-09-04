#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    return static_cast<int>(std::difftime(std::time(nullptr), timeOfEntry) * 0.85);
}