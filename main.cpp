#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int option;
	cout << "Please select one of the following options:" << endl;
	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cin >> option;
	if (option == 1)
	{
		string username;
		string password;
		cout << "Please enter your username and password." << endl;
		cin >> username;
		cin >> password;
		ofstream ofs(username + ".txt");
		ofs << username << endl << password;
		ofs.close();
	}
	else if (option == 2)
	{
		string username, un;
		string password, pw;
		cout << "Please enter your username and password." << endl;
		cin >> username;
		cin >> password;
		ifstream read(username + ".txt");
		getline(read, un);
		getline(read, pw);
		if (username == un && password == pw)
		{
			cout << "Login successful." << endl;
		}
		else
		{
			cout << "Login credentials don't match." << endl;
		}

	}
	
	
	return 0;
}
