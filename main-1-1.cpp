#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <vector>
#include <iostream>

int main() {
    int numVehicles;
    std::cout << "Enter the number of vehicles: ";
    std::cin >> numVehicles;

    std::vector<Vehicle*> vehicles;

    for (int i = 0; i < numVehicles; ++i) {
        int type, id;
        std::cout << "Enter vehicle type (1 = Car, 2 = Bus, 3 = Motorbike) and ID: ";
        std::cin >> type >> id;

        if (type == 1) {
            vehicles.push_back(new Car(id));
        } else if (type == 2) {
            vehicles.push_back(new Bus(id));
        } else if (type == 3) {
            vehicles.push_back(new Motorbike(id));
        } else {
            std::cout << "Invalid type!" << std::endl;
            --i;
        }
    }

    for (const auto& vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID() << ", Parking Duration: " 
                  << vehicle->getParkingDuration() << " seconds" << std::endl;
    }

    for (auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}