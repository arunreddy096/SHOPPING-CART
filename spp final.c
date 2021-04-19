#include "pch.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<string>
#include<vector>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class Login
{
	string username;
	string password;

public:
	void regist();
	int login();
	int login1();
	void display();
	void send();
	void read();
	void users();
	void categories();
	void  mobiles();
	void  watches();
	void laptops();
	void dress();
	void sellon();
	void readcart();
	void display1();
	void removecart();
	void itemslist();

};
void Login::itemslist()
{
	int ch;
	while (1)
	{
		cout << "1.mobiles" << endl;
		cout << "2.watches" << endl;
		cout << "3.dress" << endl;
		cout << "4.laptops" << endl;
		cout << "enter the choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1: {
			ifstream file850;
			string mob;
			file850.open("mobiles1.txt", ios::in);
			while (file850 >> mob)
				cout << mob << endl;
			cout << "-------------------" << endl;
		}
				break;
		case 2: watches();
			break;
		case 3: dress();
			break;
		case 4: laptops();
			break;

		default: cout << "wrong entry";
		}




	}
}



void Login::removecart()
{



}
void Login::display1()
{

	int ch;
	while (1)
	{
		cout << "1.sell on cart" << endl;
		cout << "enter your choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1: sellon();
			break;
		case 2: _exit(0);
			break;
		}

	}


}
int Login::login1()
{

	string user, pass; char ch;

	cout << "enter the username of minimum 7 characters::" << endl;
	cout << "*********" << endl;
	cin >> username;
	cout << "***************";
a:cout << "enter the password only characters ::" << endl;
	ch = _getwch();
	while (ch != 13)
	{

		password.push_back(ch);
		cout << '*';
		ch = _getwch();
		if (ch == 8)
		{
			int i = 0;
			password.erase();
			goto a;

		}
	}

	ifstream file(username + ".txt");
	getline(file, user);
	getline(file, pass);

	if (user == username && pass == password)
	{
		return 1;

	}
	else
	{

		return 0;


	}



}
void Login::readcart()
{
	ifstream file100;
	string line67;
	file100.open(username + "addcart.txt", ios::in);
	while (getline(file100, line67))
	{
		cout << "***********";
		cout << line67 << endl;
		cout << "***********";

	}



}
void Login::sellon()
{
	string item;
	int cash;
	string category;
	cout << "enter the item" << endl;
	cin >> item;
	cout << "enter the amount" << endl;
	cin >> cash;
	ofstream file10;
	ofstream file101;
	cout << "enter teh category";
	cin >> category;
	file10.open(category + ".txt", ios::out | ios::app);
	file101.open(category + "1.txt", ios::out | ios::app);
	file101 << item << "-" << cash << endl;
	file10 << item << endl;
}
void Login::mobiles()
{

	ifstream file11;
	string line;
	int flag1 = 0;
	file11.open("mobiles1.txt", ios::in);
	int i = 1; string text;
	char idname[100];
	while (getline(file11, line))
	{
		cout << "************" << endl;
		cout << i << "-" << line << "$" << endl;
		cout << "**************" << endl;
		i++;
	}
	cout << "enter the id of item to add cart";
	cin >> idname;

	fstream file69;
	file69.open("mobiles.txt", ios::in | ios::out);
	while (getline(file69, text))
	{

		if (text == idname)
		{
			flag1 = 1;
		}


	}
	if (flag1 == 1)
	{
		ofstream file20;
		file20.open(username + "addcart.txt", ios::out | ios::app);
		file20 << idname << endl;
	}
	else
	{
		cout << "item not found";
	}


}
void Login::watches() {


	ifstream file1001;
	string line;
	bool flag2 = 0;
	string text;
	char idname1[100];
	file1001.open("watches1.txt", ios::in);
	int i = 1;
	while (getline(file1001, line))
	{
		cout << "************" << endl;
		cout << i << "-" << line << endl;
		cout << "**************" << endl;
		i++;
	}


	cout << "enter the id of item to add cart";
	cin >> idname1;

	fstream file1002;
	file1002.open("watches.txt", ios::in | ios::out);
	while (getline(file1002, text))
	{

		if (text == idname1)
		{
			flag2 = 1;
		}


	}
	if (flag2 == 1)
	{
		ofstream file1003;
		file1003.open(username + "addcart.txt", ios::out | ios::app);
		file1003 << idname1 << endl;
	}
	else
	{
		cout << "item not found";
	}


}
void Login::laptops()
{


	ifstream file1003;
	string line;
	bool flag3 = 0;
	string text;
	char idname3[100];
	file1003.open("laptops1.txt", ios::in);
	int i = 1;
	while (getline(file1003, line))
	{
		cout << "************" << endl;
		cout << i << "-" << line << endl;
		cout << "**************" << endl;
		i++;
	}
	cout << "enter the id of item to add cart";
	cin >> idname3;

	fstream file6009;
	file6009.open("laptops.txt", ios::in | ios::out);
	while (getline(file6009, text))
	{

		if (text == idname3)
		{
			flag3 = 1;
		}


	}
	if (flag3 == 1)
	{
		ofstream file2000;
		file2000.open(username + "addcart.txt", ios::out | ios::app);
		file2000 << idname3 << endl;
	}
	else
	{
		cout << "item not found";
	}


}
void Login::dress()
{


	ifstream file1004;
	string line;
	string text;
	char idname4[100];
	bool flag4 = 0;
	file1004.open("dress1.txt", ios::in);
	int i = 1;
	while (getline(file1004, line))
	{
		cout << "************" << endl;
		cout << i << "-" << line << endl;
		cout << "**************" << endl;
		i++;
	}
	cout << "enter the id of item to add cart";
	cin >> idname4;

	fstream file6911;
	file6911.open("dress.txt", ios::in | ios::out);
	while (getline(file6911, text))
	{

		if (text == idname4)
		{
			flag4 = 1;
		}


	}
	if (flag4 == 1)
	{
		ofstream file2001;
		file2001.open(username + "addcart.txt", ios::out | ios::app);
		file2001 << idname4 << endl;
	}
	else
	{
		cout << "item not found";
	}


}
void Login::categories()
{
	int ch;
	while (1)
	{
		cout << "1.mobiles" << endl;
		cout << "2.watches" << endl;
		cout << "3.dress" << endl;
		cout << "4.laptops" << endl;
		cout << "enter the choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1: mobiles();
			break;
		case 2: watches();
			break;
		case 3: dress();
			break;
		case 4: laptops();
			break;

		default: cout << "wrong entry";
		}




	}
}
void Login::users()
{
	string line;
	ifstream file1;
	file1.open("users.txt", ios::in);
	while (getline(file1, line))
	{
		cout << line << endl;

	}


}
void Login::send()
{
	string username1;
	char text[100];
	cout << "enter the text";
	cin >> text;
	cout << "enter the user name to send" << endl;
	cin >> username1;
	fstream file;
	file.open(username1 + ".txt", ios::_Nocreate | ios::out);
	file.seekg(0, ios_base::end);
	if (file.is_open())
	{

		file << username << "-" << text << endl;
	}
	else
	{

		cout << "user not found please check userlist ";
	}



}
void Login::read()
{
	string line;
	ifstream file;
	file.open(username + ".txt", ios::in);
	file.seekg(18, ios::beg);
	while (getline(file, line))
	{
		cout << line << endl;
		cout << "**********************" << endl;
	}

}
void Login::display()
{
	int ch;
	while (1)
	{
		cout << "1.send" << endl;
		cout << "2.read" << endl;
		cout << "3.users" << endl;
		cout << "4.categories" << endl;
		cout << "5.read_cart" << endl;
		
		cout << "7.itemlist" << endl;
		cout << "8.exit" << endl;
		cout << "enter the choice";
		cin >> ch;
		switch (ch)
		{
		case 1: send();
			break;
		case 2: read();

			break;

		case 3: users();
			break;

		case 4: categories();
			break;

		case 5: readcart();
			break;
		case 6: removecart();
			break;
		case 7: itemslist();
			break;
		case 8: _exit(0);
			break;
		default: cout << "please enter the correct option";
		}
	}
}
void Login::regist()
{
	string password;
	string lines;
	int flag = 0;
	cout << "enter the username" << endl;
	cout << "****" << endl;
	cin >> username;
	cout << "**********";
	cout << "enter password" << endl;
	cin >> password;
	ofstream file;
	fstream file3;
	file3.open("users.txt", ios::in);
	while (getline(file3, lines))
	{
		if (username == lines)
		{

			flag = 1;
		}

	}
	if (flag == 1)
	{
		cout << "name already taken";
	}
	else
	{
		file.open(username + ".txt", ios::out | ios::app);
		file << username << endl;
		file << password << endl << endl;
		fstream file4;
		file4.open("users.txt", ios::out | ios::app);
		file4 << username << endl;
	}


}

int  Login::login()
{
	string user, pass; char ch;

	cout << "enter the username ::" << endl;
	cout << "*********" << endl;
	cin >> username;
	cout << "***************";
a:cout << "enter the password only characters ::" << endl;
	ch = _getwch();
	while (ch != 13)
	{

		password.push_back(ch);
		cout << '*';
		ch = _getwch();
		if (ch == 8)
		{
			int i = 0;
			password.erase();
			goto a;

		}
	}

	ifstream file(username + ".txt");
	getline(file, user);
	getline(file, pass);

	if (user == username && pass == password)
	{
		return 1;

	}
	else
	{

		return 0;


	}

}
int main()
{

	Login a;
	cout << "1.register" << endl;
	cout << "2.login as buyer" << endl;
	cout << "3.login as seller" << endl;
	cout << "4.logout" << endl;
	int ch;
	cout << "enter the input::";
	cin >> ch;
	switch (ch)
	{
	case 1: a.regist();
		break;

	case 2:  if (a.login())
	{
		cout << "sucessfully login";
		system("CLS");
		a.display();

	}
			 else
	{
		cout << "incorrect details";
	}
			 break;

	case 3:if (a.login1())
	{
		cout << "sucessfully login";
		system("CLS");
		a.display1();

	}
		   else
	{
		cout << "incorrect details";
	}
		   break;

	case 4: _exit(0);
		break;
	default: cout << "wrong entry";
	}


}
