#include <iostream>

using namespace std;

int main(){
	struct{
	string fname;
	string lname;
	string estatus;
	int yjob;
	int yres;
	int msalary;
	int adebt;
	int numchild;
}myOptions;
int choice;
cout  << "*******WELCOME USER*****";
cout << "\n";
cout <<	"1. Enter details";
cout << "\n";
cout <<	"2. Check credit qualifications";
cout << "\n";
cout <<	"3. Show qualification stats";
cout << "\n";
cout <<"4. Exit";
cout << "\n";
cout << "Enter choice: ";
cin >> choice;
if (choice == 1){

cout << "Enter name:";
cin >> myOptions.fname;
cout <<"Enter first name: " + myOptions.fname;
cout << "\n";

cout << "Enter last name:";
cin >> myOptions.lname;
cout <<"Your last name is: " + myOptions.lname;
cout << "\n";

cout << "Enter employment status:";
cin >> myOptions.estatus;
cout <<"Your employment staus is: " + myOptions.estatus;
cout << "\n";

cout << "Enter years in current job:";
cin >> myOptions.yjob;
cout << "The number of years in current job is: " + myOptions.yjob;
cout << "\n";

cout << "Enter years in current residence:";
cin >> myOptions.yres;
cout << "The number of years in current residence is: " + myOptions.yres;
cout << "\n";

cout << "Enter monthly salary:";
cin >> myOptions.msalary;
cout << "Your monthly salary is: " + myOptions.msalary;
cout << "\n";

cout << "Enter debt amount: ";
cin >> myOptions.adebt;
cout << "Your monthly debt is: " + myOptions.adebt;
cout << "\n";

cout << "Enter number of children: ";
cin >> myOptions.numchild;
cout << "The number of children that you have are: " + myOptions.numchild;
cout << "\n";
}
else if (choice == 2){
	cout << "You must meet the followung criteria to qualify for credit."<< "\n";
}
else if (choice == 3){
	cout << "In the past we have denied 23% of potential credit customers, however we ahve been able to assist more than 70%."<< "\n";
}
int i;
int ans;
bool y = true;
bool n = false;
cout << "Do you want to retake credit appliaction type [1] for yes and [0] for no:";
cin>> ans;
if (ans= 'n'){
cout << "Thank you for your application"<<"\n";
}
if (ans = 'y'){
	while(ans = true){
int choice;
cout  << "*******WELCOME USER*****";
cout << "\n";
cout <<	"1. Enter details";
cout << "\n";
cout <<	"2. Check credit qualifications";
cout << "\n";
cout <<	"3. Show qualification stats";
cout << "\n";
cout <<"4. Exit";
cout << "\n";
cout << "Enter choice: ";
cin >> choice;
if (choice = 1){

cout << "Enter name:";
cin >> myOptions.fname;
cout <<"Enter first name: " + myOptions.fname;
cout << "\n";

cout << "Enter last name:";
cin >> myOptions.lname;
cout <<"Your last name is: " + myOptions.lname;
cout << "\n";

cout << "Enter employment status:";
cin >> myOptions.estatus;
cout <<"Your employment staus is: " + myOptions.estatus;
cout << "\n";

cout << "Enter years in current job:";
cin >> myOptions.yjob;
cout << "The number of years in current job is: " + myOptions.yjob;
cout << "\n";

cout << "Enter years in current residence:";
cin >> myOptions.yres;
cout << "The number of years in current residence is: " + myOptions.yres;
cout << "\n";

cout << "Enter monthly salary:";
cin >> myOptions.msalary;
cout << "Your monthly salary is: " + myOptions.msalary;
cout << "\n";

cout << "Enter debt amount: ";
cin >> myOptions.adebt;
cout << "Your monthly debt is: " + myOptions.adebt;
cout << "\n";

cout << "Enter number of children: ";
cin >> myOptions.numchild;
cout << "The number of children that you have are: " + myOptions.numchild;
cout << "\n";
}	
	}
}	
}




