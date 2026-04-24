#pragma once

#include <string>
#include "Content.h"

class Series : public Content {
private:
    int seasons;
    int episodesPerSeason;
    int episodeDuration;

public:
    Series();
    Series(const std::string& title, const std::string& genre, int year, double rating,
           int seasons, int episodesPerSeason, int episodeDuration);

    Series(const Series& other);
    Series& operator=(const Series& other);
    ~Series();

    void display() const override;
    int getDuration() const override;
    std::string getType() const override;
};