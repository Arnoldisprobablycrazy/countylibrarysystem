/*
county library management system
by Arnold Maweu
Feb 2022
MIT license
c89 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

int menu() {
  int action;
printf("select an action:\n");
printf("1.Add new patron\n");
printf("2.View patrons!\n");
printf("3.View Books\n");
printf("4.Add new Book\n");
printf("4.Your action: ");
scanf("%d",&action);
 return action;
}


int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("welcome Mr.Arnold!\n");
     printf("You selected action %d",menu());
    menu();
    return 0;
}
