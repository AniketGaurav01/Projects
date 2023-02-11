#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include <windows.h>
#include<conio.h>
using namespace std;

// Driver Code
int main()
{   int ch;
    cout<<"Press for 1 for clock and 2 for Stopwatch";
    cin>>ch;
    switch(ch){
    case 1:
	system("color 4A");

	// Background color and Foreground
	int hour, min, sec;
	cout << setw(70)
		<< "Enter Current time\n";

	// Use of manipulator for taking
	// input from the user
	cout << "HH- ";
	cin >> hour;
	cout << "MM- ";
	cin >> min;
	cout << "SS- ";
	cin >> sec;

	// Background color and the
	// Foreground for 2nd screen
	system("color 4A");

	// Cases for the Wrong Time Input
	if (hour > 23) {
		cout << "Wrong Time input";
	}
	else if (min > 60) {
		cout << "Wrong Time Input";
	}
	else if (sec > 60) {
		cout << "Wrong Time Input";
	}

	// Otherwise
	else {
		while (1)

		// Run Block infinitely
		{
			system("cls");

			// Clear the console

			// Code for Showing Time
			for (hour; hour < 24; hour++) {

				for (min; min < 60; min++) {

					for (sec; sec < 60; sec++) {
						system("cls");

						cout << "\n\n\n\n~~~"
								"~~~"
								"~~"
								"Current Time = "
							<< hour << ":" << min << ":"
							<< sec
							<< "Hrs~~~~"
								"~~~"
								"~";

						// HH:MM:SS columns in output

						Sleep(1000);

						// Pause for 1 sec
					}
					sec = 0;
				}
				min = 0;
			}
		}
	}
    break;
    case 2:{
    int HH = 0, MM = 0, SS = 0;  
    cout << " \n\t\t stopwatch";  
    cout << " \n\t\t HH: MM: SS";  
    cout << " \n\t\t " << HH << " : " << MM << " : " << SS;  
    cout << " \n\t\t press any key to start";  
    _getch ();  
    while ( !_kbhit() )  
    {  
        SS++;  
        Sleep( 1000 );  
        if ( SS > 59 )  
        {  
            MM++;  
            SS = 0;  
        }  
        if ( MM > 59 )  
        {  
            HH++;  
            MM = 0;  
        }  
        system( "CLS" );  
        cout << " \n\t\t stopwatch";  
        cout << " \n\t\t HH: MM: SS";  
        cout << " \n\t\t " << HH << " : " << MM << " : " << SS;  
        cout << " \n\t\t press any key to stop";  
    }  
    _getch ();  
    cout << " \n\t\t the time after pausing is";  
    cout << " \n\t\t " << HH << " : " << MM << " : " << SS;  
    _getch ();  
    return 0 ; 
    break; 
}}
}
