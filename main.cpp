#include <iostream>
#include <vector>
using namespace std;

void print_menu(string name);
void print_list();
void add_item();
void delete_item();

vector<string> list;

int main(int arg_count, char *args[]) {
    if (arg_count > 1) {
        string name(args[1]);
        print_menu(name);
    }
    else {
        cout << "Username not supplied" << endl;
    }

    return 0;
}

void print_menu (string name) {
    int choice;
    cout << "***************\n";
    cout << "1 - Print list.\n2 - Add to list.\n3 - Delete from list.\n4 - Quit.\n";
    cout << "Enter your choice and press return: ";
    cin >> choice;
    if (choice == 4) {
        exit(0);
    }
    else {
        cout << "Ongoing\n";
    }
}
