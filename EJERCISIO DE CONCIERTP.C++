#include <iostream>
#include <string>

using namespace std;

int main() {
    // Prices for each location
    double price_general = 50.00;
    double price_preferencia = 80.00;
    double price_platea = 120.00;
    double price_vip = 160.00;

    // Variables to store the chosen location and number of tickets
    string location;
    int num_tickets;

    // Ask the user for the location and number of tickets
    cout << "Ingrese la ubicacion (general, preferencia, platea o vip): ";
    cin >> location;
    cout << "Ingrese la cantidad de entradas: ";
    cin >> num_tickets;

    // Calculate the total cost based on the chosen location and number of tickets
    double total_cost;
    if (location == "general") {
        total_cost = num_tickets * price_general;
    } else if (location == "preferencia") {
        total_cost = num_tickets * price_preferencia;
    } else if (location == "platea") {
        total_cost = num_tickets * price_platea;
    } else if (location == "vip") {
        total_cost = num_tickets * price_vip;
        // If the location is VIP, ask the user to choose a drink
        string drink;
        cout << "Elija su bebida (gaseosa, cerveza o agua): ";
        cin >> drink;
        // Add the cost of the drink to the total cost
        if (drink == "gaseosa" || drink == "cerveza") {
            total_cost += 10.00;
        } else if (drink == "agua") {
            total_cost += 5.00;
        }
    } else {
        // If the location is not valid, print an error message
        cout << "Ubicacion no valida" << endl;
        return 0;
    }

    // Print the total cost
    cout << "Total a pagar: $" << total_cost << endl;

    return 0;
} // TRABAJAR EL EJERCICIO CON SWITCH - CASE
