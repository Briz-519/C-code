#include <stdio.h>
#include <string.h>

int main() {
    int tryy = 0;
    // cpassword and cname cannot be used by user
    // if someone uses this name and password, then it will show wrong username and password
    // if the user uses a different password and name, then welcome
    int i, mxtry = 3, cpassword = 2000519, password;
    char cname[10] = "Briz", name[10];

    do {
        printf("\n\ninput user name:\n");
        scanf("%s", name);
        printf("input password:\n");
        scanf("%d", &password);

        if (strcmp(name, cname) == 0 && password == cpassword) {
            tryy = tryy + 1;
            printf("Wrong username or password!\n");

            if (mxtry - tryy == 0) {
                printf("You have entered three times incorrectly and no more attempts!");
                printf("\n\t\tPlease exit!\n");
                break;
            } else {
                printf("You have tried %d times and you can try %d more times!", tryy, mxtry - tryy);
            }

        } else {
            printf("Welcome!\n");
            break;
        }
    } while (mxtry - tryy > 0);

    return 0;
}
