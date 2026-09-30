#include <iostream>
#include <string>
using namespace std;

string BookId[10];
string BookName[10];
string author[10];
int books = 0;

void Add_book() {
	if (books >= 10) {
		cout << "Library is full!\n";
		return;
	}

	cout << "Enter Book ID :";
	cin >> BookId[books];

	for (int i = 0;i < books;i++) {

		if (BookId[i] == BookId[books]) {
			cout << "This Book ID already exists!!!\n";
			return;
		}
	}
	cin.ignore();

	cout << "Enter book Name :";
	getline (cin,BookName[books]);

	cout << "Enter author :";
	getline (cin,author[books]);

	books++;

	cout << "Book is added sucssesfully!!!";
}

void Search_book() {
	string id;
	cout << "Enter Book Id :";
	cin >> id;

	for (int i = 0;i < books;i++) {
		if (BookId[i] == id) {
			cout << "\nBook found!\n";
			cout << "Book ID :" << BookId[i] << endl;
			cout << "Book Name :" << BookName[i] << endl;
			cout << "The author is :" << author[i] << endl;

			return;
		}
	}	
	cout << "Book not found!!!";
}

void Show_books()
{
	if (books == 0)
	{
		cout << "No books available.\n";
		return;
	}

	for (int i = 0;i < books;i++) {

		cout << "\nBook " << i + 1 << endl;
		cout << "Book ID : " << BookId[i] << endl;
		cout << "Book Name : " << BookName[i] << endl;
		cout << "Author : " << author[i] << endl;
	}
}

int main() {
	int choice;

	do
	{
		cout << "\n===== Library System =====\n";
		cout << "1. Add Book\n";
		cout << "2. Search Book\n";
		cout << "3. Show All Books\n";
		cout << "4. Exit\n";
		cout << "Enter your choice : ";

		if(!(cin>>choice)){
			cout << "Invalid input! Please enter a number. ";
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}

		if (choice == 1)
		{
			Add_book();
		}
		else if (choice == 2)
		{
			Search_book();
		}
		else if (choice == 3)
		{
			Show_books();
		}
		else if (choice == 4)
		{
			cout << "Goodbye!\n";
		}
		else
		{
			cout << "Invalid choice!\n";
		}

	} while (choice != 4);

	return 0;
}