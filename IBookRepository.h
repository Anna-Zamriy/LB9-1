#pragma once

#include "Book.h"
#include <vector>

class IBookRepository {
public:
    virtual ~IBookRepository() = default;
    virtual void add(const Book& book) = 0;
    virtual std::vector<Book> getAll() const = 0;
};