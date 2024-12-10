unsigned getWordsCount(const char* words) {
    unsigned count = 0;
    bool inWord = false;
    int i = 0;
    // word[i] != '\0';
    while(words[i])
    {
        if (!isSeparator(words[i]))
        {
            //the start of a new word
            if (!inWord) {
                inWord = true;
                ++count; 
            }
        }
        else // it is a separator
        {
            inWord = false;
        }
        i++;
    }
    return count;
}
