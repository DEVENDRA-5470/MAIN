#include <stdio.h>

int main() {
    char ch='a';
    // Check if the input is a lowercase vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    }
    // Check if the input is an uppercase vowel
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }
    // Check if the input is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    }
    // If the input is not an alphabet character
    else {
        printf("%c is not an alphabet character.\n", ch);
    }

    return 0;
}
