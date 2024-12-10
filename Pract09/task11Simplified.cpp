#include <iostream>

bool isSeparator(char ch)
{
    return ch == ' ' || ch == '\t' || ch == '!' || ch == '?' || ch == '.' || ch == ',';
}

unsigned getWordsCount(const char*& words) {
    unsigned count = 0;
    bool inWord = false;
    int i = 0;
    while(words[i])
    {
        // we found a word
        if (!isSeparator(words[i]))
        {
            count++;
            //skip to the end of the word
            while(!isSeparator(words[i]))
                i++;
        }
        i++;
    }
    return count;
}
