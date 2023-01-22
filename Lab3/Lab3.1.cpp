#include <stdio.h>
#include <string.h>
struct usercontact {
	char name[30];
	char email[30];
	char fackbook[30];
	char phonenum[15];
} typedef uc;

int main() {
	uc user1;
	printf("Your name : ");
	gets(user1.name);
	printf("Your email : ");
	gets(user1.email);
	printf("Your fackbook : ");
	gets(user1.fackbook);
	printf("Your Phonenum : ");
	gets(user1.phonenum);
	printf("\nContact channels of %s\n", user1.name);
	printf("E-mail : %s\tFacebook : %s\t Phonenum : %s ", user1.email, user1.fackbook, user1.phonenum);
	return 0;
}