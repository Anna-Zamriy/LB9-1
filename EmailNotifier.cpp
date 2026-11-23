#include "EmailNotifier.h"

#include <iostream>

void EmailNotifier::notifyBookAdded(const Book& book) {
    (void)book;
    std::cout << "Sending email notification about the new book...\n";
}