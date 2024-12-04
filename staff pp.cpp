#include <iostream>
#include <string>
using namespace std;

// Function is used to check room availability 
void reserveRoom(bool rooms[], int roomNumber)
   {
    if (rooms[roomNumber]) {
    cout << "Sorry, room " << roomNumber + 1 << " is already reserved."<<endl;
    } else
	{
    rooms[roomNumber] = true;
    cout << "Room " << roomNumber + 1 << " has been reserved successfully."<<endl;
    }
}

// Function is used to check the room is available
void checkAvailability(bool rooms[], int roomNumber)
{
    if (rooms[roomNumber]) {
    cout << "Room " << roomNumber + 1 << " is already reserved."<<endl;
    } else 
	{
    cout << "Room " << roomNumber + 1 << " is available."<<endl;
    }
}

// Function is used to calculate the bill according to the number of days
float calculateBill(int days) 
{
    float rate = 100.0;  
    return rate * days;
}

int main() 
{
    const int totalRooms = 5;
    bool rooms[totalRooms] = {false, false, false, false, false}; // this means rooms are available

    int choice, roomNumber, days;
    
    while (true)
   {
    cout << "\nHotel Reservation System\n";
    cout << "1. Check room availability\n";
    cout << "2. Reserve room\n";
    cout << "3. Calculate Bill\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
        
    switch (choice) 
	{
    case 1:
    cout << "Enter room number to check availability (1-" << totalRooms << "): ";
    cin >> roomNumber;
    if (roomNumber < 1 || roomNumber > totalRooms) 
	{
    cout << "Invalid room number! Please enter a number between 1 and " << totalRooms << endl;
    } 
	else 
	{
    checkAvailability(rooms, roomNumber - 1); 
    }
       break;
                
   case 2:
        cout << "Enter room number to reserve (1-" << totalRooms << "): ";
        cin >> roomNumber;
        if (roomNumber < 1 || roomNumber > totalRooms)
	    {
        cout << "Invalid room number! Please enter a number between 1 and " << totalRooms <<endl;
        } else 
		{
        reserveRoom(rooms, roomNumber - 1); 
        }
            break;
                
    case 3:
        cout << "Enter the number of days for your stay: ";
        cin >> days;
        if (days <= 0)
		{
       cout << "Invalid number of days!"<<endl;
        }
		else 
		{
        cout << "Your total bill is: $" << calculateBill(days) << endl;
        }
        break;
                
        case 4:
            cout << "Exiting the system. good bye!"<<endl;
            return 0;
                
        default:
            cout << "Invalid input! Please choose a valid choice."<<endl;
        }
    }
    
    return 0;
}

