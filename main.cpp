#include "Book.h"
#include "EmailNotifier.h"
#include "InMemoryBookRepository.h"
#include "Library.h"

#include <iostream>

// Приклад додавання нового механізму сповіщення без зміни класу Library
class ConsoleLogNotifier final : public INotifier {
public:
    void notifyBookAdded(const Book& book) override {
        std::cout << "[Log] Added \"" << book.getTitle()
            << "\" by " << book.getAuthor() << '\n';
    }
};

int main() {
    InMemoryBookRepository repository;
    EmailNotifier emailNotifier;
    Library library(repository, emailNotifier);

    Book book1{ "The Catcher in the Rye", "J.D. Salinger" };
    Book book2{ "To Kill a Mockingbird", "Harper Lee" };

    library.addBook(book1);
    library.addBook(book2);
    library.displayBooks();

    std::cout << "--- Alternative notifier without modifying Library ---\n";
    ConsoleLogNotifier logNotifier;
    Library customLibrary(repository, logNotifier);
    Book book3{ "1984", "George Orwell" };
    customLibrary.addBook(book3);

    return 0;
}