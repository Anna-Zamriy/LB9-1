#pragma once

#include "IBookRepository.h"
#include <vector>

class InMemoryBookRepository final : public IBookRepository {
public:
    void add(const Book& book) override;
    std::vector<Book> getAll() const override;

private:
    std::vector<Book> books_;
};