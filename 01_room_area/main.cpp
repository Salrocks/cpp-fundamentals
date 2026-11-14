#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
    int room_length, room_width;
    cout << "\n-------------------------Room Area---------------------" << endl;
    cout << "\nPlease enter the length and width of the room. Separate them by a space: ";
    cin >> room_length >> room_width;
    int room_area = room_length * room_width;
    cout << "\nThe Area is " << room_area << endl;
    return 0;
    }
