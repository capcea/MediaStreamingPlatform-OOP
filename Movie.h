#include "Content.h"

class Movie : public Content {
private:
    int duration;

public:
    Movie();
    Movie(const std::string& title, const std::string& genre, int year, double rating, int duration);
    Movie(const Movie& other);
    Movie& operator=(const Movie& other);
    ~Movie();

    int getDuration() const;
    void setDuration(int duration);

    void display() const override;
    int getDurationTotal() const override;
    std::string getType() const override;
};