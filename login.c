#include <stdio.h>
#include <string.h>
#include "login.h"
int login() {
    char password[50];
    char username[50];
    printf("Enter Username \n");
    fgets(username, sizeof(username), stdin);
    printf("Enter Password \n");
    fgets(password,sizeof(password),stdin);
    username[strlen(username)-1] = '\0';
    password[strlen(password)-1] = '\0';
    if (strcmp(username,"admin") == 0 && strcmp(password,"admin123") == 0) {
    printf("Welcome Admin\n");
    return 1;        
    }
    else{
        printf("Access Denied");
        return 0;
    }
}
