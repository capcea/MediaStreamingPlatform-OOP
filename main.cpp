#include <iostream>
#include "StreamingPlatform.h"

using namespace std;

int main() {
    StreamingPlatform platform;
    int option;

    do {
        cout << "\n===== NETFLIX MENU =====\n";
        cout << "1. Add movie\n";
        cout << "2. Add series\n";
        cout << "3. Show catalog\n";
        cout << "4. Search by title\n";
        cout << "5. Filter by genre\n";
        cout << "0. Exit\n";
        cout << "Choose option: ";

        cin >> option;

        try {
            if (option == 1) {
                platform.addMovie();
            }
            else if (option == 2) {
                platform.addSeries();
            }
            else if (option == 3) {
                platform.showCatalog();
            }
            else if (option == 4) {
                string title;
                cout << "Title: ";
                cin >> title;
                platform.searchByTitle(title);
            }
            else if (option == 5) {
                string genre;
                cout << "Genre: ";
                cin >> genre;
                platform.filterByGenre(genre);
            }
            else if (option == 0) {
                cout << "Exiting...\n";
            }
            else {
                throw invalid_argument("Invalid option.");
            }
        }
        catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }

    } while (option != 0);

    return 0;
}