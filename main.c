BY ARNOLD MAWEU
FEB 2022
MIT license
C89 compiler
*/

#include <stdio.h>
#include <stdlib.h>


struct patron{
     char name[100];
     char email[50];
     char password[30]
     int is_staff;
};

void add_patron() {
    struct Patron patron;
    printf("Enter name: " );
    getchar ();
    gets (patron.name);
    printf("Enter Email: ");
    gets(patron.email);
    printf("Enter 1 if staff 0 otherwise");
    scanf("%d",&patron.is staff);
    printf("%s added\n",patron.name);

}
int menu() {
    int action;
    printf("Select new action below\n");
    printf("1. Add new Patron\n");
    printf("2.View all Patrons\n");
    printf("3. View all books\n");
    printf("4. Add new Book\n");
    printf("Your action:\n");
    scanf("%d",&action);
    if(action< 1 || action > 4){
        printf("Invalid Action. Try again\n");
    }
    return action;
}
void execute_action(int action) {
switch(action){
    case 1:
    printf("adding a new patron\n");
    break;
    case 2:
    printf("list of all patrons\n");
    break;
    case 3:
    printf("list of all books\n");
    break;
    case 4:
    printf("adding a new book\n");
    break;
    default: printf("Invalid action.\n");
    }
}
int main()
{
    printf("COUNTY LIBRARY SYSTEM\n");
    printf("Welcome ARNOLD MAWEU\n");
    execute_action(menu());
    return 0;
}

