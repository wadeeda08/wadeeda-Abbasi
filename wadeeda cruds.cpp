#include <iostream>
#include<string>
using namespace std;
int main() 
{
int id[10];   
string title[10];    
int count = 0; 
      
int choice;

 while (true)
	 {
        cout << " BOOK MANAGEMENT SYSTEM:"<<endl;
        cout << "1. Add Book:"<<endl;
        cout << "2. Show Books:"<<endl;
        cout << "3. Update Book:"<<endl;
        cout << "4. Delete Book:"<<endl;
        cout << "5. Exit:"<<endl;
        cout << "Choose: "<<endl;
        cin >> choice;
        cin.ignore();

 // ADD BOOk
        
        if (choice == 1) 
		{
            if (count >= 10)
			 {
                cout << "Storage full! Cannot add more books:"<<endl;
             } 
			else
			 {
                cout << "Enter Book ID: ";
                cin >> id[count];
                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, title[count]);

                count++;
                cout << "Book added successfully:"<<endl;
            }
        }

 // SHOW BOOKS 
        
        else if (choice == 2) 
		{
            if (count == 0)
			 {
                cout << "No books available:"<<endl;
             } 
			else 
			{
                cout << " Book List:"<<endl;
                for (int i = 0; i < count; i++)
				 {
                    cout << "ID: " << id[i];
                     cout<< " Title: " << title[i] << endl;
                 }
            }
        }

 // UPDATE BOOK 
        
        else if (choice == 3) 
		{
            int updateId, found = -1;
            cout << "Enter Book ID to update: ";
            cin >> updateId;
            cin.ignore();

            for (int i = 0; i < count; i++)
			 {
                if (id[i] == updateId)
				 {
                    found = i;
                    break;
                 }
             }

            if (found == -1) 
			{
                cout << "Book not found:"<<endl;
            } else
			 {
                cout << "Enter new title: ";
                getline(cin, title[found]);
                cout << "Book updated:"<<endl;
            }
        }
  // DELETE BOOK 
        
        else if (choice == 4) 
		{
            int deleteId, found = -1;
            cout << "Enter Book ID to delete: ";
            cin >> deleteId;

            for (int i = 0; i < count; i++) 
			{
                if (id[i] == deleteId)
				 {
                    found = i;
                    break;
                }
            }

            if (found == -1) 
			{
                cout << "Book not found:"<<endl;
            } 
			else
			 {
                for (int j = found; j < count - 1; j++)
				 {
                    id[j] = id[j + 1];
                    title[j] = title[j + 1];
                }
                count--;
                cout << "Book deleted:"<<endl;
            }
        }

 // Exit
        
        else if (choice == 5) 
		{
            cout << "Goodbye:"<<endl;
            break;
        }

        else 
		{
            cout << "Invalid choice:"<<endl;
        }
    }
}
