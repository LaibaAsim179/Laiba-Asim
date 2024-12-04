#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void clearscreen() {
    system("cls");
}

// Function is used to check room availability
void reserveRoom(bool rooms[], int roomNumber) {
    if (rooms[roomNumber]) {
        cout << "Sorry, room " << roomNumber + 1 << " is already reserved." << endl;
    } else {
        rooms[roomNumber] = true;
        cout << "Room " << roomNumber + 1 << " has been reserved successfully." << endl;
    }
}

// Function is used to check the room is available
void checkAvailability(bool rooms[], int roomNumber) {
    if (rooms[roomNumber]) {
        cout << "Room " << roomNumber + 1 << " is already reserved." << endl;
    } else {
        cout << "Room " << roomNumber + 1 << " is available." << endl;
    }
}

// Function is used to calculate the bill according to the room type and number of days
float calculateBill(string roomType, int days) {
    float rate = 0.0;

    // Assigning rates based on room type
    if (roomType == "single") {
        rate = 100.0;
    } else if (roomType == "double") {
        rate = 150.0;
    } else if (roomType == "suite") {
        rate = 200.0;
    } else {
        cout << "Invalid room type!" << endl;
        return 0;
    }
    return rate * days;
}

int main() {
    const int totalRooms = 5;
    bool rooms[totalRooms] = {false, false, false, false, false}; // this means rooms are available

    int choice, roomNumber, days;
    string roomType;

    while (true) {
        cout << "\nHotel Reservation System\n";
        cout << "1. Check room availability\n";
        cout << "2. Reserve room\n";
        cout << "3. Calculate Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        clearscreen();

        switch (choice) {
            case 1:
                cout << "Enter room number to check availability (1-" << totalRooms << "): ";
                cin >> roomNumber;
                if (roomNumber < 1 || roomNumber > totalRooms) {
                    cout << "Invalid room number! Please enter a number between 1 and " << totalRooms << endl;
                } else {
                    checkAvailability(rooms, roomNumber - 1); // Checking availability
                }
                break;
                clearscreen();

            case 2:
                cout << "Enter room type (single/double/suite): ";
                cin >> roomType;

                // Validate room type
                if (roomType != "single" && roomType != "double" && roomType != "suite") {
                    cout << "Invalid room type! Please choose from 'single', 'double', or 'suite'." << endl;
                    break;
                }

                cout << "Enter room number to reserve (1-" << totalRooms << "): ";
                cin >> roomNumber;
                if (roomNumber < 1 || roomNumber > totalRooms) {
                    cout << "Invalid room number! Please enter a number between 1 and " << totalRooms << endl;
                } else {
                    reserveRoom(rooms, roomNumber - 1); // Reserve the room
                }
                break;
                clearscreen();

            case 3:
                cout << "Enter the room type (single/double/suite): ";
                cin >> roomType;
                cout << "Enter the room number (1-" << totalRooms << "): ";
                cin >> roomNumber;
                cout << "Enter the number of days for your stay: ";
                cin >> days;

                if (days <= 0) {
                    cout << "Invalid number of days!" << endl;
                } else {
                    cout << "Your total bill is: RS." << calculateBill(roomType, days) << endl;
                }
                break;
                clearscreen();

            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
                clearscreen();

            default:
                cout << "Invalid input! Please choose a valid choice." << endl;
        }
    }

    return 0;
}

