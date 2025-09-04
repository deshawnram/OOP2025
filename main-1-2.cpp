#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

int main() {
    ParkingLot lot(10);

    while (lot.getCount() < 10) {
        int type, id;
        std::cout << "Enter vehicle type (1 = Car, 2 = Bus, 3 = Motorbike) and ID: ";
        std::cin >> type >> id;

        Vehicle* vehicle = nullptr;
        if (type == 1) {
            vehicle = new Car(id);
        } else if (type == 2) {
            vehicle = new Bus(id);
        } else if (type == 3) {
            vehicle = new Motorbike(id);
        } else {
            std::cout << "Invalid type!" << std::endl;
            continue;
        }

        lot.parkVehicle(vehicle);
    }

    int removeID;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> removeID;
    lot.unparkVehicle(removeID);

    return 0;
}