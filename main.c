#include <stdio.h>
#include <string.h>
#include "login.h"
#include "application.h"
int main() {
    if (!login()) {
        return 0;
    }
    app();
}
