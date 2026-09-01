#include <iostream>
using namespace std;

int main() {
    char text[100];
    int digits = 0;
    int alphabets = 0;
    int spaces = 0;

    cout << "Enter a sentence: " << endl;
    cin.getline(text, 100);

    char *ptr = text;

    while (*ptr != '\0') {

        if (isdigit(*ptr))
            digits++;
        else if (isalpha(*ptr))
            alphabets++;
        else if (*ptr == ' ')
            spaces++;

        ptr++;
    }

    cout << "Number of digits: " << digits << endl;
    cout << "Number of alphabets: " << alphabets << endl;
    cout << "Number of spaces: " << spaces << endl;

    return 0;
}