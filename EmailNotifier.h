#pragma once

#include "INotifier.h"

class EmailNotifier final : public INotifier {
public:
    void notifyBookAdded(const Book& book) override;
};