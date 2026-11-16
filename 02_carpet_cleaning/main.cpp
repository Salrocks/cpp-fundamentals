#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned int large_rooms {0}, small_rooms {0}, service_cost {0};
    const unsigned int large_room_price {35}, small_room_price {25};
    const float service_tax {.06};
    cout << "############################################" << endl;
    cout << "\nWelcome to Sal's Carpet Cleaning Service" << endl;
    cout << "\nHow many large rooms do you want clean: ";
    cin >> large_rooms;
    cout << "How many small rooms do you want clean: ";
    cin >> small_rooms;
    cout << "-------------------------------------------" << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;
    service_cost = (large_rooms * large_room_price) + (small_rooms * small_room_price);
    cout << "Cost: $" << service_cost << endl;
    cout << "Tax: $" << service_cost * service_tax << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Total Estimate: $" << service_cost + (service_cost * service_tax) << endl;
    cout << "This estimate is valid for 30 days" << endl;
    return 0;
}

