#include "Library.h"

Library::Library(IBookRepository& repository, INotifier& notifier)
    : repository_(repository), notifier_(notifier) {
}

void Library::addBook(const Book& book) {
    repository_.add(book);
    notifier_.notifyBookAdded(book);
}

void Library::displayBooks() const {
    const auto books = repository_.getAll();
    for (const auto& book : books) {
        book.display();
    }
}