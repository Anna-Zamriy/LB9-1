#pragma once

#include "Book.h"
#include "IBookRepository.h"
#include "INotifier.h"

class Library {
public:
    Library(IBookRepository& repository, INotifier& notifier);

    void addBook(const Book& book);
    void displayBooks() const;

private:
    IBookRepository& repository_;
    INotifier& notifier_;
};