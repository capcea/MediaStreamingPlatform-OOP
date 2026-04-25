#include "Series.h"

using namespace std;

Series::Series() : Content() {
    seasons = 0;
    episodesPerSeason = 0;
    episodeDuration = 0;
}

Series::Series(const string& title, const string& genre, int year, double rating,
               int seasons, int episodesPerSeason, int episodeDuration)
    : Content(title, genre, year, rating) {
    this->seasons = seasons;
    this->episodesPerSeason = episodesPerSeason;
    this->episodeDuration = episodeDuration;
}

Series::Series(const Series& other) : Content(other) {
    seasons = other.seasons;
    episodesPerSeason = other.episodesPerSeason;
    episodeDuration = other.episodeDuration;
}

Series& Series::operator=(const Series& other) {
    if (this != &other) {
        Content::operator=(other);
        seasons = other.seasons;
        episodesPerSeason = other.episodesPerSeason;
        episodeDuration = other.episodeDuration;
    }

    return *this;
}

Series::~Series() {
}

void Series::display() const {
    cout << "Series:" << endl;
    cout << "Title: " << title << endl;
    cout << "Genre: " << genre << endl;
    cout << "Year: " << year << endl;
    cout << "Rating: " << rating << endl;
    cout << "Seasons: " << seasons << endl;
    cout << "Episodes per season: " << episodesPerSeason << endl;
    cout << "Episode duration: " << episodeDuration << " min" << endl;
    cout << "Total duration: " << getDuration() << " min" << endl;
}

int Series::getDuration() const {
    return seasons * episodesPerSeason * episodeDuration;
}

string Series::getType() const {
    return "Series";
}