#include <stdio.h>
#include <string.h>
#include "employee.h"
void registerEmpData();
void printAll();
void searchByName();
void save();

int main(){
	char password[11] = "qwerty1234";
	char pass[20];
	int count = 0;
	while(1){
	printf("Password:\n");
	scanf("%s", pass);
	if(!strcmp(pass, password)){
		displayMenu()
		int select = 0;
		scanf("%d", &select);
		if(select == 1)
			registerEmpData();
		else if(select == 2)
			printAll();
		else if(select == 3)
			searchByName();
		else if(select == 4)
			save();
		else
			break;
		}
	else {
		count++;
		if(count == 1)
			printf("Not Matched!!!\n");
		else if(count == 2)
			printf("Not Matched(twice)\n");
		else if(count == 3)
			printf("Not Matched(3 times)\n");
		else if(count == 4)
			printf("You are not allowed to acces EMS\n");
		}
	}
}

