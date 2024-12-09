#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char substr[100];
    int start = 2, length = 6;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

 
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Length: %zu\n", strlen(str));

  
    strncpy(substr, str + start, length);
    substr[length] = '\0'; 

    printf("Specified substring: %s\n", substr);

    return 0;
}
