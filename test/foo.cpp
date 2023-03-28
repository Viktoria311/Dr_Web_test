#include "foo.h"

void TrimRight(char* s)
{
    if (s != nullptr && *s != '\0')
    {
        char * p_space = nullptr;

        for(int i = 0; *(s + i) != '\0'; ++i)
        {
            if (*(s + i) == ' ' && p_space == nullptr) // нашли пробел И это первый пробел
                p_space = s + i; // запоминаем этот первый пробел
            else if (*(s + i) != ' ' && p_space != nullptr) // нашли символ и ранее были пробелы
                p_space = nullptr; // предыдущие пробелы не нужны
        }
        *p_space = '\0';
    }
}
