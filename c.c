#include <stdio.h>
#include <ctype.h>    // isalpha(), isdigit(), isspace()
#include <string.h>   // strchr()

int main() {
    char line[200];
    int alpha = 0, digit = 0, special = 0, word = 0, lineCount = 0;
    while (fgets(line, sizeof(line), stdin)) {
        // Check for empty line to stop input
        if (line[0] == '\n') {
            break;
        }

        lineCount++; // line count barabo

        int inWord = 0;

        for (int i = 0; line[i] != '\0'; i++) {
            if (isalpha(line[i])) {
                alpha++;       // letter hole alpha++
            } else if (isdigit(line[i])) {
                digit++;      // digit hole digit++
            } else if (!isspace(line[i])) {
                special++;   // space char na hole special++
            }

            // Word count logic
            if (!isspace(line[i])) {
                if (inWord == 0) {
                    word++;
                    inWord = 1;
                }
            } else {
                inWord = 0;
            }
        }
    }

    printf("Alphabets: %d\n", alpha);
    printf("Digits: %d\n", digit);
    printf("Special characters: %d\n", special);
    printf("Words: %d\n", word);
    printf("Lines: %d\n", lineCount);

    return 0;
}