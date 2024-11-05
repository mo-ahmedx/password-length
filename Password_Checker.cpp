	// Main library for input and output( cout & cin )
	#include <iostream>
	// This is used to mesure time
	#include <chrono>
	// and this library is for delays
	#include<thread>

	using namespace std;

	int main()
	{
		//variables for password & username
		string username, password;
		
		//just console design..
		cout << "______________________________"<<endl;
		cout << "-------Password_Checker-------"<<endl;
		cout << "______________________________"<<endl;

		cout << "Enter your username: ";
		cin >> username;
		//This will make delay for 2 seconds to ask password
		this_thread::sleep_for(chrono::seconds(2));
		cout << "Enter your password(must be 8-16 digits): ";
		cin >> password;
		//This is also delay before the result of the input
		this_thread::sleep_for(chrono::seconds(5));
		//if the user input met the required
		if (password.length() >= 8 && password.length() <=16) {

			cout << "Welcome Back sir " << username;
		}
		//if the user input is less than expected	
		else if (password.length() <= 7) {

			cout << "ERROR: Your password is too short!";
		}
		//if the user input greater than expected	
		else if (password.length() >= 17) {

			cout << "ERROR: Your Password is too long to be saved!";
		}

		return 0;
	}

