#pragma once

#include <string>

class Book {
public:
    Book(std::string title, std::string author);

    const std::string& getTitle() const noexcept;
    const std::string& getAuthor() const noexcept;
    void display() const;

private:
    std::string title_;
    std::string author_;
};