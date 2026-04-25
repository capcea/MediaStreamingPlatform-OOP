#include "Content.h"

using namespace std;

Content::Content() {
    title = "";
    genre = "";
    year = 0;
    rating = 0;
}

Content::Content(const string& title, const string& genre, int year, double rating) {
    this->title = title;
    this->genre = genre;
    this->year = year;
    this->rating = rating;
}

Content::Content(const Content& other) {
    title = other.title;
    genre = other.genre;
    year = other.year;
    rating = other.rating;
}

Content& Content::operator=(const Content& other) {
    if (this != &other) {
        title = other.title;
        genre = other.genre;
        year = other.year;
        rating = other.rating;
    }
    return *this;
}

Content::~Content() {
}
string Content::getTitle() const {
    return title;
}

string Content::getGenre() const {
    return genre;
}

int Content::getYear() const {
    return year;
}

double Content::getRating() const {
    return rating;
}
void Content::setTitle(const string& title) {
    this->title = title;
}

void Content::setGenre(const string& genre) {
    this->genre = genre;
}

void Content::setYear(int year) {
    this->year = year;
}

void Content::setRating(double rating) {
    this->rating = rating;
}
ostream& operator<<(ostream& out, const Content& content) {
    out << "Title: " << content.title << endl;
    out << "Genre: " << content.genre << endl;
    out << "Year: " << content.year << endl;
    out << "Rating: " << content.rating << endl;
    return out;
}

istream& operator>>(istream& in, Content& content) {
    cout << "Title: ";
    in >> content.title;

    cout << "Genre: ";
    in >> content.genre;

    cout << "Year: ";
    in >> content.year;

    cout << "Rating: ";
    in >> content.rating;

    return in;
}