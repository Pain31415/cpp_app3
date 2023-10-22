#include <iostream>
using namespace std;

int main() {
    double distance_AB, distance_BC, cargo_weight;
    double fuel_capacity = 300.0;
    double max_refuel = 300.0;
    double fuel_consumption = 0.0;

    cout << "Enter the distance between points A and B (km): ";
    cin >> distance_AB;
    cout << "Enter the distance between points B and C (km): ";
    cin >> distance_BC;
    cout << "Enter the weight of the cargo (kg): ";
    cin >> cargo_weight;

    if (cargo_weight <= 500) {
        fuel_consumption = 1.0;
    }
    else if (cargo_weight <= 1000) {
        fuel_consumption = 4.0;
    }
    else if (cargo_weight <= 1500) {
        fuel_consumption = 7.0;
    }
    else if (cargo_weight <= 2000) {
        fuel_consumption = 9.0;
    }
    else {
        cout << "The plane cannot lift a load weighing more than 2000 kg. Flight is impossible." << endl;
        return 0;
    }

    double fuel_required_AB = fuel_consumption * distance_AB;
    double fuel_required_BC = fuel_consumption * distance_BC;
    double total_fuel_required = fuel_required_AB + fuel_required_BC;

    if (total_fuel_required <= fuel_capacity) {
        cout << "The flight is possible without refueling at point B." << endl;
    }
    else {
        double refuel_required = total_fuel_required - fuel_capacity;
        if (refuel_required > max_refuel) {
            cout << "The plane cannot refuel more than" << max_refuel << " liters of fuel at point B." << endl;
        }
        else {
            cout << "It is necessary to refuel " << refuel_required << " liters of fuel at point B." << endl;
        }
    }

    return 0;
}