#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

void clearscreen() 
{
    system("cls");
}
// Function is used to display the rooms in a table format
void displayRooms(bool rooms[], const int totalRooms)
 {
    cout << "\nRoom Availability Status:\n";
    cout << "+------------+---------------------+\n";
    cout << "| Room No.  | Availability         |\n";
    cout << "+------------+---------------------+\n";
    for (int i = 0; i < totalRooms; ++i) 
	{	
        cout << "| " << setw(9) << i + 1 << " | " << (rooms[i] ? "Reserved" : "Available") << "       |\n";
    }
    cout << "+------------+---------------------+\n";
}
// Function is used for room reservation
void reserveRoom(bool rooms[], int roomNumber) 
{
    if (rooms[roomNumber]) 
	{
        cout << "Sorry, room is already reserved." << roomNumber + 1<< endl;
    } 
	else
	{
        rooms[roomNumber] = true;
        cout << "Room has been reserved successfully."<< roomNumber + 1 << endl;
    }
}
// Function is used to check the room availability
void checkAvailability(bool rooms[], int roomNumber) 
{
    if (rooms[roomNumber]) 
	{
        cout << "Room is already reserved."<< roomNumber + 1 << endl;
    }
	 else 
	{
        cout << "Room is available."<< roomNumber + 1 << endl;
    }
}
// Function to calculate the bill according to the room type and number of days
float calculateBill(string roomType, int days) 
{
    float rate = 0.0;
    // Assigning rates according to their room type
    if (roomType == "single")
	{
        rate = 100.0;
    } 
	else if (roomType == "double") 
	{
        rate = 150.0;
    } 
	else if (roomType == "suite") 
	{
        rate = 200.0;
    } 
	else 
	{
        cout << "Invalid room type!" << endl;
        return 0;
    }
    return rate * days;
}
int main() 
{
    const int totalRooms = 5;
    bool rooms[totalRooms] = {false, false, false, false, false}; // this means rooms are available
    int choice, roomNumber, days;
    string roomType;

    while (true) 
	{
        cout << "\nstaff management system:\n";
        cout << "1. Check room availability\n";
        cout << "2. Reserve room\n";
        cout << "3. Calculate Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        clearscreen();

        switch (choice) 
		{
            case 1:
                displayRooms(rooms, totalRooms); 
                cout << "Enter room number to check availability (1-" << totalRooms << "):";
                cin >> roomNumber;
                if (roomNumber < 1 || roomNumber > totalRooms) 
				{
                    cout << "Invalid room number! Please enter a number between 1 and " << totalRooms << endl;
                } 
				else 
				{
                    checkAvailability(rooms, roomNumber - 1); // Check room availability
                }
                break;
                clearscreen();

            case 2:
                displayRooms(rooms, totalRooms);  
                cout << "Enter room type (single/double/suite):"<<endl;
                cin >> roomType;

                // room type validation
                if (roomType != "single" && roomType != "double" && roomType != "suite") 
				{
                    cout << "Invalid room type! Please select from 'single', 'double', or 'suite'." << endl;
                    break;
                }
                cout << "Enter room number to reserve (1-" << totalRooms << "): ";
                cin >> roomNumber;
                if (roomNumber < 1 || roomNumber > totalRooms) 
				{
                    cout << "Invalid room number! Please enter a number between 1 and " << totalRooms << endl;
                } 
				else 
				{
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

                if (days <= 0) 
				{
                    cout << "Invalid number of days!" << endl;
                } 
                else if  (roomNumber < 1 || roomNumber > totalRooms) 
				{
                cout << "Invalid room number.\n";
                }
                else if (!rooms[roomNumber - 1]) // Check user reserved room or not reserved 
                {
                    cout << "Room is not reserved yet. Please reserve the room first." << roomNumber << endl;
                }
		        else 
				{
                    cout << "\nBill Calculation:\n";
                    cout << "+-------------------+------------+----------+------------+\n";
                    cout << "| Room Type        | Room No.  | Days    | Total Bill |\n";
                    cout << "+-------------------+------------+----------+------------+\n";
                    cout << "| " << setw(17) << roomType << " | " << setw(9) << roomNumber 
                         << " | " << setw(7) << days << " | RS." << setw(10) 
                         << calculateBill(roomType, days) << " |\n";
                    cout << "+-------------------+------------+----------+------------+\n";
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

