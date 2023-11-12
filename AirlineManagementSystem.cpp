#define _CRT_SECURE_NO_WARNINGS

// Airline Management System
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

string toLower(string str)
{
	string lowerStr = str;

	for (size_t i = 0; i < str.length(); ++i) {
		lowerStr[i] = tolower((unsigned char)str[i]);
	}
	return lowerStr;
}

time_t t = time(NULL);
tm* timePtr = localtime(&t);

const int MAX_VALID_YR = timePtr->tm_year + 1901;
const int MIN_VALID_YR = timePtr->tm_year + 1900;

const int MIN_VALID_MNTH = timePtr->tm_mon + 1;
const int MAX_VALID_MNTH = timePtr->tm_mon + 2;

// Returns true if
// given year is valid.
bool isLeap(int year)
{
	// Return true if year
	// is a multiple of 4 and
	// not multiple of 100.
	// OR year is multiple of 400.
	return (((year % 4 == 0) &&
		(year % 100 != 0)) ||
		(year % 400 == 0));
}

// Returns true if given
// year is valid or not.
bool isValidDate(int d, int m, int y)
{
	// If year, month and day
	// are not in given range
	if (y > MAX_VALID_YR ||
		y < MIN_VALID_YR)
		return false;
	if (m < MIN_VALID_MNTH || m > MAX_VALID_MNTH)
		return false;
	if (d < 1 || d > 31)
		return false;

	// Handle February month
	// with leap year
	if (m == 2)
	{
		if (isLeap(y))
			return (d <= 29);
		else
			return (d <= 28);
	}

	// Months of April, June,
	// Sept and Nov must have
	// number of days less than
	// or equal to 30.
	if (m == 4 || m == 6 ||
		m == 9 || m == 11)
		return (d <= 30);

	return true;
}

// Class for selecting flight destinationCitys of your choice

class flightDetails
{

	int flightSerial[15] = { 101, 102, 103, 122, 123, 124, 131, 132, 133, 241, 242, 243, 501, 502, 503 };
	int price[16] = { 12000, 10000, 15000, 11000, 14000, 10000, 12000, 13500, 9000, 12500, 14000, 12000, 16000, 16500, 13500 };
	int selectFlight;
	int perPersonPrice;

public:
	void ishurdi()
	{
		cout << "\n\n Flights available for Ishurdi:";
		cout << "\n  " << flightSerial[0] << "-Flight (time: 5:00pm) " << price[0] << "/- per person";
		cout << "\n  " << flightSerial[1] << "-Flight (time: 12:00am) " << price[1] << "/- per person";
		cout << "\n  " << flightSerial[2] << "-Flight (time: 8:00pm) " << price[2] << "/- per person";

		cout << "\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 0; i < 3; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

public:
	void dhaka()
	{
		cout << "\n You have chosen Dhaka.";
		cout << "\n Flights available for Dhaka:";
		cout << "\n  " << flightSerial[3] << "-Flight (time: 3:00pm) " << price[3] << "/- per person";
		cout << "\n  " << flightSerial[4] << "-Flight (time: 7:00pm) " << price[4] << "/- per person";
		cout << "\n  " << flightSerial[5] << "-Flight (time: 2:00am) " << price[5] << "/- per person";

		cout << "\n\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 3; i <= 5; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

public:
	void jessore()
	{
		cout << "\n You have chosen Jessore.";
		cout << "\n Flights available for Jessore:";
		cout << "\n  " << flightSerial[6] << "-Flight (time: 4:00pm) " << price[6] << "/- per person";
		cout << "\n  " << flightSerial[7] << "-Flight (time: 9:00pm) " << price[7] << "/- per person";
		cout << "\n  " << flightSerial[8] << "-Flight (time: 2:00am) " << price[8] << "/- per person";

		cout << "\n\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 6; i <= 8; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

public:
	void coxsbazar()
	{
		cout << "\n You have chosen Coxsbazar.";
		cout << "\n Flights available for Coxsbazar:";
		cout << "\n  " << flightSerial[9] << "-Flight (time: 5:00pm) " << price[9] << "/- per person";
		cout << "\n  " << flightSerial[10] << "-Flight (time: 6:00pm) " << price[10] << "/- per person";
		cout << "\n  " << flightSerial[11] << "-Flight (time: 1:00am) " << price[11] << "/- per person";

		cout << "\n\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 9; i <= 11; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

public:
	void rajshahi()
	{
		cout << "\n Flights available for Rajshahi:";
		cout << "\n  " << flightSerial[12] << "-Flight (time: 4:00am) " << price[12] << "/- per person";
		cout << "\n  " << flightSerial[13] << "-Flight (time: 3:00pm) " << price[13] << "/- per person";
		cout << "\n  " << flightSerial[14] << "-Flight (time: 6:00am) " << price[14] << "/- per person";

		cout << "\n\nChoose your flight: ";
		cin >> selectFlight;

		for (int i = 12; i <= 14; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				break;
			}
		}
	}

	// Set Price of per person

	void setPerPersonPrice(int price)
	{
		perPersonPrice = price;
	}

	// Get Price of per person

	int getperPersonPrice()
	{
		return perPersonPrice;
	}

	// Get selected flight by passenger

	int getSelectFlight()
	{
		return selectFlight;
	}
};

// Class Node saving user information

class Node
{
public:
	string name = "", date = "", departureCity = "", destinationCity = "", gender = "", NID = "";
	int age = 0, bookingCode = 0, ticketSerialNo = 0;
	float fare = 0;
	Node* next = NULL;
};


// Class for the main process of booking tickets

class bookingProcedureOfTicket
{

private:
	Node* head = NULL;
	Node* current = NULL;
	Node* front = NULL;
	Node* rear = NULL;
	int Bcode = 0;
	int Bcode2 = 0;
	flightDetails call;

public:
	int Age = 0;
	int members = 0;
	int count = 0;
	float sum = 0;
	float fare = 0;
	float discount = 0;
	float discountFare = 0;
	float totalFare = 0;
	string nid = "";
	int numberOfBooking = 0;

public:
	
	bool isValidCity(string city)
	{
		if (toLower(city) == "ishurdi" || toLower(city) == "jessore" ||
			toLower(city) == "dhaka" || toLower(city) == "rajshahi")
		{
			return true;
		}
		return false;
	}


	// This method will contain all the passenger info
	void inputPassengersInfo()
	{
		Bcode = rand();
		Bcode2 = 8971 + Bcode;

		string departureCity = "", destinationCity = "", date = "";
		int change = 1;

		do {
			if (change == 1 || change == 2)
			{
				do
				{
					cout << "DEPARTURE\n";
					cout << "    Our flights are only available from Dhaka, Ishurdi, Coxsbazar, Jessore and Rajshahi.\n";
					cout << "\nEnter your departure city from above mentioned cities: ";
					cin >> departureCity;
				} while (!isValidCity(departureCity));
			}

			if (change == 1 || change == 3)
			{
				do
				{
					cout << "DESTINATION\n";
					cout << "    Our flights are only available to Dhaka, Ishurdi, Coxsbazar, Jessore and Rajshahi.\n";
					cout << "\nEnter your destination city from above mentioned cities: ";
					cin >> destinationCity;
				} while (!isValidCity(destinationCity));

			}

			if (toLower(departureCity) == toLower(destinationCity))
			{
				cout << "\nDeparture and Destination cities cannot be same." << endl;
				cout << "\nTo change both Enter 1.\nTo change Deaprture Enter 2.\nTo Change Destnation Enter 3.\n" << endl;
				cout << "Select: ";
				cin >> change;
			}
		} while (toLower(departureCity) == toLower(destinationCity));

		// Date Input
		int d = 0, m = 0, y = 0;
		bool validDate = false;

		do
		{
			cout << "\nEnter Date: ";
			cin >> d;
			cout << "Enter Month: ";
			cin >> m;
			cout << "Enter Year: ";
			cin >> y;

			validDate = isValidDate(d, m, y);

			if (!validDate)
			{
				cout << "\nPlease enter a valid date, month and year. You can book seats upto 30 days in advance.\n";
			}

		} while (!validDate);

		date = to_string(d) + "/" + to_string(m) + "/" + to_string(y);

		cout << "\nFor how many people you want to book tickets: ";
		cin >> members;

		cout << endl;

		numberOfBooking = count + members;


		for (int i = 1; i <= members; i++)
		{
			Node* passenger_newnode = new Node();

			cout << "Enter passenger name: ";
			cin >> passenger_newnode->name;

			cout << "Enter your age: ";
			cin >> passenger_newnode->age;

			passenger_newnode->date = date;

			cout << "Enter gender: ";
			cin >> passenger_newnode->gender;

			// NID validation
			cout << "Enter NID Number (without dashes): ";
			cin >> nid;

			if (nid.length() != 17)
			{
				cout << "Enter correct NID number (without dashes): ";
				cin >> nid;
			}

			//nid = nid.insert(4, "-");
			//nid = nid.insert(13, "-");

			passenger_newnode->NID = nid;

			cout << "Your ticket Serial No. is: S-" << i;
			passenger_newnode->ticketSerialNo = i;
			cout << "\n----------------------------------------------------\n" << endl;

			passenger_newnode->departureCity = departureCity;
			passenger_newnode->destinationCity = destinationCity;

			passenger_newnode->bookingCode = Bcode2;


			count++; // incrementing number of bookings


			if (numberOfBooking > 2)
			{
				if (front == NULL)
				{
					front = passenger_newnode;
					rear = passenger_newnode;
				}

				else
				{
					rear->next = passenger_newnode;
					rear = passenger_newnode;
				}
			}


			else
			{
				if (head == NULL)
				{
					head = passenger_newnode;
					passenger_newnode->next = NULL;
				}

				else
				{
					current = head;

					while (current->next != NULL)
					{
						current = current->next;
					}

					current->next = passenger_newnode;
				}
			}

		}


		// Check if user has entered correct destinationCity according to available flights

		if (destinationCity == "Ishurdi" || destinationCity == "ishurdi")
		{
			call.ishurdi();
		}
		else if (destinationCity == "Jessore" || destinationCity == "jessore")
		{
			call.jessore();
		}
		else if (destinationCity == "Dhaka" || destinationCity == "dhaka")
		{
			call.dhaka();
		}
		else if (destinationCity == "Rajshahi" || destinationCity == "rajshahi")
		{
			call.rajshahi();
		}
		else if (destinationCity == "Coxsbazar" || destinationCity == "coxsbazar")
		{
			call.coxsbazar();
		}
		else
		{
			cout << "Wrong destinationCity\n";
		}


		// Conditions for printing message
		if (numberOfBooking > 2)
		{
			cout << "\nYour booking code is " << Bcode2;
			cout << "\nNo more seats are availbale, you are added in the waiting list" << endl;
		}
		else
		{
			cout << "\nYour booking code is " << Bcode2;
			cout << "\nTo proceed and view total price, Press 2.";
		}



	}


	// Display Queue

	void showWaitingList()
	{
		current = front;

		if (current == NULL)
			cout << "Waiting list is empty" << endl;

		else
		{
			while (current != NULL)
			{
				cout << "_____________________________________________________________________ " << endl << endl;
				cout << "| Serial No.:     \t" << "S-" << current->ticketSerialNo << " \t\t\t|" << endl;
				cout << "| Passenger Name: \t" << current->name << " \t\t\t|" << endl;
				cout << "| Age:            \t" << current->age << " \t\t\t|" << endl;
				cout << "| NID:           \t" << current->NID << " \t|" << endl;
				cout << "| Booking Date:   \t" << current->date << " \t\t|" << endl;
				cout << "| From:           \t" << current->departureCity << " \t\t|" << endl;
				cout << "| To:             \t" << current->destinationCity << " \t\t|" << endl;
				cout << "_____________________________________________________________________ " << endl << endl;

				current = current->next;
			}
		}

	}

	// To calculate Total Price of tickets

	void calculatePrice()
	{
		current = head;
		bool found = false;
		fare = call.getperPersonPrice();
		totalFare = sum = 0;

		int bcode;

		cout << "Enter your booking code: ";
		cin >> bcode;

		if (current == NULL)
			cout << "\nNo price to display";

		while (current != NULL)
		{
			if (bcode == current->bookingCode)
			{
				if (current->age > 0 && current->age <= 6)
				{
					discount = call.getperPersonPrice() * 0.5; // 50% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else if (current->age > 6 && current->age <= 12)
				{
					discount = call.getperPersonPrice() * 0.3; // 30% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else if (current->age >= 60)
				{
					discount = call.getperPersonPrice() * 0.2; // 20% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else
				{
					fare = call.getperPersonPrice();
					current->fare = fare;
					sum += fare;
				}

				found = true;
			}
			current = current->next;
		}


		if (found = false)
		{
			cout << "Enter correct booking code" << endl;
		}
		else
		{
			totalFare = sum;
			cout << "Your Total Fare is: " << totalFare;
		}
	}

	// This will display the information of all the bookings

	void viewInfo()
	{
		cout << endl;

		current = head;
		int bookCode;
		bool found = false;

		cout << "Enter ticket code: ";
		cin >> bookCode;

		if (current == NULL)
		{
			cout << "There is no booking to display." << endl;
		}

		while (current != NULL)
		{
			if (bookCode == current->bookingCode)
			{
				cout << "_____________________________________________________________________ " << endl << endl;
				cout << "| Serial No.:     \t" << "S-" << current->ticketSerialNo << " \t\t\t|" << endl;
				cout << "| Passenger Name: \t" << current->name << " \t\t\t|" << endl;
				cout << "| Age:            \t" << current->age << " \t\t\t|" << endl;
				cout << "| NID:           \t" << current->NID << " \t|" << endl;
				cout << "| Booking Date:   \t" << current->date << " \t\t|" << endl;
				cout << "| From:           \t" << current->departureCity << " \t\t|" << endl;
				cout << "| To:             \t" << current->destinationCity << " \t\t|" << endl;
				cout << "| Flight No.:     \tPA-" << call.getSelectFlight() << " \t\t|" << endl;
				cout << "| Fare:           \t" << current->fare << " \t\t\t|" << endl;
				cout << "_____________________________________________________________________ " << endl;
				cout << endl;
				found = true;
			}
			current = current->next;
		}
		if (found != true)
		{
			cout << "Booking not found" << endl;
		}
	}

	// Modify any user Ticket incase of incorrect information

	void modifyTicket()
	{
		int bcode;
		int serial;
		int found = -1;

		cout << "Enter your booking code: ";
		cin >> bcode;

		cout << "\nEnter serial number to edit: S-";
		cin >> serial;

		current = head;
		while (current != NULL)
		{
			if (bcode == current->bookingCode && serial == current->ticketSerialNo)
			{
				cout << "Enter passenger name: ";
				cin >> current->name;

				cout << "Enter your age: ";
				cin >> current->age;

				cout << "Enter date: ";
				cin >> current->date;

				cout << "Enter gender: ";
				cin >> current->gender;

				found = 0;
				cout << endl;
				break;
			}
			current = current->next;
		}

		if (found == -1)
		{
			cout << "Record not Found" << endl;
		}
	}

	// Method to confirm payment after booking

	void confirmPayment()
	{
		current = head;

		int bcode, userInput;
		string nid;
		bool found = false;

		cout << "Enter your booking code: ";
		cin >> bcode;

		cout << "\nEnter NID number of booking of 1st person(with dashes): ";
		cin >> nid;

		if (current == NULL)
		{
			cout << "\nThere is no booking aganist entered booking code" << endl;
		}

		while (current != NULL)
		{
			if (bcode == current->bookingCode && nid == current->NID)
			{
				found = true;
				break;
			}
			current = current->next;
		}

		if (found)
		{

			cout << "\nYour Total Fare is: " << totalFare << endl;

			cout << "\nPay fare amount to confirm ticket: ";
			cin >> userInput;

			if (userInput == totalFare)
			{
				cout << "\nYour booking is confirmed, enjoy your trip!!!";
			}
			else
			{
				cout << "\nPlease pay the required amount" << endl;

				cout << "\nPay fare amount to confirm ticket: ";
				cin >> userInput;

				if (userInput == totalFare)
				{
					cout << "\nYour booking is confirmed, enjoy your trip!!!";
				}

				else
				{
					cout << "\nYour Booking is cancelled, book again." << endl;
				}
			}
		}
		else
		{
			cout << "\nBookings not found, book your ticket first" << endl;
		}
	}

	// To clear all passenger data from the system

	void DeletingPassengerInfo()
	{
		current = head;
		int Bcode;
		//char decide;
		bool found = false;

		cout << "Enter your booking code to cancel booking: ";
		cin >> Bcode;

		if (head == NULL)
		{
			cout << "No booking to cancel" << endl;
		}
		else
		{
			if (current->next == NULL)            // If only one Node in Linked List this condition will execute
			{
				if (Bcode == current->bookingCode)
				{
					head = NULL;
					delete(current);
					found = true;
				}
			}
			else
			{
				// If there are more than one node and first node is deleting
				if (current == head && Bcode == current->bookingCode)
				{
					Node* temp = current;
					current = current->next;
					delete(temp);
					found = true;
				}
				else  // If deleting node from end or middle
				{
					Node* previous = current;
					while (current != NULL)
					{
						if (Bcode == current->bookingCode)
						{
							previous->next = current->next;
							delete (current);
							found = true;
						}

						current = current->next;
					}

				}
			}

			if (found == false)
			{
				cout << "\nBooking not found" << endl;
			}
			else {
				cout << "\nBooking is cancelled, successfully" << endl;
			}
		}
	}
};

// Menu which will select our desirable query

class Menu
{
	int choice = 0;
	bookingProcedureOfTicket call;

public:
	void showMenu()
	{

		do
		{
			cout << endl;
			cout << "\n----------------------------------" << endl;
			cout << "Bangladesh International Airline ";
			cout << "\n";
			cout << "----------------------------------";

			cout << "\n 11 Services for the Cities";
			cout << "\n 1 Booking";
			cout << "\n 2 Price";
			cout << "\n 3 View Ticket details";
			cout << "\n 4 Modify Ticket details";
			cout << "\n 5 Payment confirmation ";
			cout << "\n 6 Cancel your booking";
			cout << "\n 7 Show waiting List";
			cout << "\n 0 Exit \n";
			cout << "\nEnter your Choice:  ";
			cin >> choice;

			switch (choice)
			{
			case 11:
				cout << endl;
				cout << "\n    Dhaka \n";
				cout << "\n    Coxsbazar \n";
				cout << "\n    Jessore \n";
				cout << "\n    Rajshahi \n";
				cout << "\n   Ishurdi \n" << endl;

				break;
			case 1:
				cout << endl;
				cout << "\n    Book PIA Flight Tickets \n"
					<< endl;
				call.inputPassengersInfo();
				break;
			case 2:
				cout << endl;
				call.calculatePrice();
				break;
			case 3:
				cout << endl;
				call.viewInfo();
				break;
			case 4:
				cout << endl;
				call.modifyTicket();
				break;
			case 5:
				cout << endl;
				call.confirmPayment();
				break;
			case 6:
				cout << endl;
				call.DeletingPassengerInfo();
				break;
			case 7:
				cout << endl;
				call.showWaitingList();
			}

		} while (choice != 0);
	}
};

// Main Method

int main()
{
	Menu call; // Menu Object

	call.showMenu(); // Called method

	return 0;
}
