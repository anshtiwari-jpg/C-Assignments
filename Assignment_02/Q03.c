#include <stdio.h>

int main() {
    char username[20], password[20];

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("\nLogin Successful");
    } else {
        printf("\nInvalid Login");
    }

    return 0;
}
