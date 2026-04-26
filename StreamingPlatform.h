#pragma once

#include <vector>
#include <string>
#include "Content.h"
#include "Movie.h"
#include "Series.h"

using namespace std;

class StreamingPlatform {
private:
    vector<Content*> catalog;

public:
    StreamingPlatform();
    ~StreamingPlatform();

    void addMovie();
    void addSeries();
    void showCatalog() const;
    void searchByTitle(const string& title) const;
    void filterByGenre(const string& genre) const;
};