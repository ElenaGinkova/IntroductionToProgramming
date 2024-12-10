#include <iostream>
const int HIST_SIZE = 10;
bool isDig(char ch)
{
    return ch >= '0' && ch <= '9';
}

void countDig(const char* str, int* hist)
{
    if (!str)
        return;
    int i = 0;
    while (str[i])
    {
        if (isDig(str[i]))
        {
            hist[str[i] - '0']++;//to int
        }
        i++;
    }
}

void fillRes(char* res, const int* hist)
{
    if (!hist)
        return;
    int indx = 0;
    for (int i = 0; i < HIST_SIZE; i++)
    {
        if (hist[i])
        {
            if (indx != 0)
            {
                res[indx++] = ',';
            }
            res[indx++] = hist[i] + '0';//to char
            res[indx++] = 'x';
            res[indx++] = i + '0';//to char
        }
    }
    res[indx] = '\0';//the end
}

int main()
{
    const int MAX_SIZE = 100;
    char input[MAX_SIZE] = "4233";// 4233
    int hist[HIST_SIZE] = {};
    char res[MAX_SIZE * 3] = {};
    countDig(input, hist);
    fillRes(res, hist);
    std::cout << res;
}
