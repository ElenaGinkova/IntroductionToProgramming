void countLetters(const char* str, int index, int& lowercaseCount, int& uppercaseCount) {
    // Базов случай: ако сме стигнали до края на низа
    if (!*str) {
        return;
    }

    if (islower(str[index])) {
        lowercaseCount++;
    }
    else if (isupper(str[index])) {
        uppercaseCount++;
    }

    countLetters(str, index + 1, lowercaseCount, uppercaseCount);
}
