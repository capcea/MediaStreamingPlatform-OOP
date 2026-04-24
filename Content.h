#include <iostream>
#include <string>

class Content {
protected:
    std::string title;
    std::string genre;
    int year;
    double rating;

public:
    Content();
    Content(const std::string& title, const std::string& genre, int year, double rating);
    Content(const Content& other);
    Content& operator=(const Content& other);
    virtual ~Content();

    std::string getTitle() const;
    std::string getGenre() const;
    int getYear() const;
    double getRating() const;

    void setTitle(const std::string& title);
    void setGenre(const std::string& genre);
    void setYear(int year);
    void setRating(double rating);

    virtual void display() const = 0;
    virtual int getDuration() const = 0;
    virtual std::string getType() const = 0;

    friend std::ostream& operator<<(std::ostream& out, const Content& content);
    friend std::istream& operator>>(std::istream& in, Content& content);
};