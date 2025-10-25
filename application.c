#include <stdio.h>
#include <string.h>
#include "application.h"
void app() {
    float balance = 150.50;
    char input[50];
    fgets(input,sizeof(input) , stdin);
    input[strlen(input)-1] = '\0';
    if (strcmp(input,"balance") == 0) {
        printf("%.2f",balance);
    }
    else {
        printf("Command Not Found");
    }
}
