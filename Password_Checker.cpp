
	#include <iostream>

	#include <chrono>

	#include<thread>

	using namespace std;

	int main()
	{
		string username, password;

		cout << "______________________________"<<endl;
		cout << "-------Password_Checker-------"<<endl;
		cout << "______________________________"<<endl;

		cout << "Enter your username: ";
		cin >> username;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "Enter your password(must be 8-16 digits): ";
		cin >> password;
		this_thread::sleep_for(chrono::seconds(5));

		if (password.length() >= 8 && password.length() <=16) {

			cout << "Welcome Back sir " << username;
		}
		else if (password.length() <= 7) {

			cout << "ERROR: Your password is too short!";
		}
		else if (password.length() >= 17) {

			cout << "ERROR: Your Password is too long to be saved!";
		}

		return 0;
	}

