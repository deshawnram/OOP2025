#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

int main() {
    ParkingLot lot(10);

    for (int i = 0; i < 5; ++i) {
        lot.parkVehicle(new Car(i + 1));
    }

    for (int i = 0; i < 3; ++i) {
        lot.parkVehicle(new Bus(i + 6));
    }

    for (int i = 0; i < 2; ++i) {
        lot.parkVehicle(new Motorbike(i + 9));
    }

    std::cout << "Vehicles overstaying 15 seconds: " 
              << lot.countOverstayingVehicles(15) << std::endl;

    return 0;
}