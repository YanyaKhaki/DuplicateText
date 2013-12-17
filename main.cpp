#include <iostream>
#include <stdio.h>

using namespace std;

//В тексте продублировать слова.

int StrLength(char S1[1000]) //Функция, которая находит длину строки
{
    for (int i = 0; i < 1000; i++)
    {
        if (S1[i] == 0)
        {
            return i;
        }
    }
}

int DuplicateFun(char S1[1000]) //Функция, которая дублирует слова
{
    char S2[100],S3[100];
    int lj = 0;
    int j = 0;
    for (int i = 0; i <= StrLength(S1); i++)
    {
        S2[j] = S1[i];

        if (S1[i+1] == '\0' || S1[i] == ' ') //Учитываем и последнее слово в тексте,
            //если после него не стоит пробел (так оно тоже будет дублироваться).
        {
            for (int z = lj; z <= i; z++)
            {
                j++;
                S2[j] = S1[z];
                lj = i;
            }
        }
        j++;
    }
    cout << S2 << endl;
}

int main()
{
    const int m = 20;
    char str[m];
    gets(str);
    DuplicateFun(str);
    return 0;
}

