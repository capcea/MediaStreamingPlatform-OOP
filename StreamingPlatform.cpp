#include "StreamingPlatform.h"
#include <iostream>

using namespace std;

StreamingPlatform::StreamingPlatform() {
}

StreamingPlatform::~StreamingPlatform() {
    for (Content* content : catalog) {
        delete content;
    }
    catalog.clear();
}

void StreamingPlatform::addMovie() {
    string title, genre;
    int year, duration;
    double rating;

    cout << "Title: ";
    cin >> title;

    cout << "Genre: ";
    cin >> genre;

    cout << "Year: ";
    cin >> year;

    cout << "Rating: ";
    cin >> rating;

    cout << "Duration: ";
    cin >> duration;

    catalog.push_back(new Movie(title, genre, year, rating, duration));
    cout << "Movie added.\n";
}

void StreamingPlatform::addSeries() {
    string title, genre;
    int year, seasons, episodesPerSeason, episodeDuration;
    double rating;

    cout << "Title: ";
    cin >> title;

    cout << "Genre: ";
    cin >> genre;

    cout << "Year: ";
    cin >> year;

    cout << "Rating: ";
    cin >> rating;

    cout << "Seasons: ";
    cin >> seasons;

    cout << "Episodes per season: ";
    cin >> episodesPerSeason;

    cout << "Episode duration: ";
    cin >> episodeDuration;

    catalog.push_back(new Series(title, genre, year, rating, seasons, episodesPerSeason, episodeDuration));
    cout << "Series added.\n";
}

void StreamingPlatform::showCatalog() const {
    if (catalog.empty()) {
        cout << "Catalog is empty.\n";
        return;
    }

    for (Content* content : catalog) {
        content->display(); 
        cout << "-----------------\n";
    }
}

void StreamingPlatform::searchByTitle(const string& title) const {
    bool found = false;

    for (Content* content : catalog) {
        if (content->getTitle() == title) {
            content->display();
            found = true;
        }
    }

    if (!found) {
        cout << "No content found with this title.\n";
    }
}

void StreamingPlatform::filterByGenre(const string& genre) const {
    bool found = false;

    for (Content* content : catalog) {
        if (content->getGenre() == genre) {
            content->display();
            cout << "-----------------\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No content found with this genre.\n";
    }
}