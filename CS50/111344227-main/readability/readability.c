#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_letter(string text);
int count_word(string word);
int count_sentences(string sentence);

int main(void)
{
    string s = get_string("Text: ");
    printf("%s\n", s);
    int letters = count_letter(s);
    printf("%i\n", letters);
    int words = count_word(s);
    printf("%i\n", words);
    int sentences = count_sentences(s);
    printf("%i\n", sentences);
    float L = ((float) letters / (float)words) * 100;
    float S = ((float) sentences / (float) words) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index < 1.0)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1.0 && index < 1.8)
    {
        printf("Grade 1\n");
    }
    else if (index >= 1.8 && index < 2.8)
    {
        printf("Grade 2\n");
    }
    else if (index >= 2.8 && index < 4.0)
    {
        printf("Grade 3\n");
    }
    else if (index >= 4.0 && index < 5.5)
    {
        printf("Grade 5\n");
    }
    else if (index >= 5.5 && index < 7.5)
    {
        printf("Grade 7\n");
    }
    else if (index >= 7.5 && index < 8.8)
    {
        printf("Grade 8\n");
    }
    else if (index >= 8.8 && index < 9.8)
    {
        printf("Grade 9\n");
    }
    else if (index >= 9.8 && index <= 16)
    {
        printf("Grade 10\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
}

int count_letter(string text)
{
    int j = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (islower(text[i]) || isupper(text[i]))
        {
            j++;
        }
    }
    return j;
}

int count_word(string word)
{
    int j = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] == ' ')
        {
            j++;
        }
    }
    return j + 1;
}

int count_sentences(string sentence)
{
    int j = 0;
    for (int i = 0, n = strlen(sentence); i < n; i++)
    {
        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?')
        {
            j++;
        }
    }
    return j;
}