#include <stdio.h>
#include <string.h>
struct usercontact {
	char name[30];
	char email[30];
	char fackbook[30];
	char phonenum[15];
} typedef uc;

void Adddata(uc);

int main() {
	uc user;
	int Numdata;
	printf("Input Old Data \n");
	printf("Your name : ");
	gets(user.name);
	printf("Your email : ");
	gets(user.email);
	printf("Your fackbook : ");
	gets(user.fackbook);
	printf("Your Phonenum : ");
	gets(user.phonenum);
	printf("\n");
	Adddata(user);
	printf("\nContact channels of %s\n", user.name);
	printf("E-mail : %s\tFacebook : %s\t Phonenum : %s ", user.email,
		   user.fackbook, user.phonenum);

	return 0;
}

void Adddata(uc user) {
	printf("Input New Data \n");
	printf("Your name : ");
	gets(user.name);
	printf("Your email : ");
	gets(user.email);
	printf("Your fackbook : ");
	gets(user.fackbook);
	printf("Your Phonenum : ");
	gets(user.phonenum);
	printf("\n");
}