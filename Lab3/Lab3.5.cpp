#include <stdio.h>
#include <string.h>
struct usercontact {
	char name[30];
	char email[30];
	char fackbook[30];
	char phonenum[15];
} typedef uc;

void Adddata(uc *, int);

int main() {
	uc *user;
	int Numdata, selectdata;
	printf("Input Number of Data : ");
	scanf("%d", &Numdata);
	user = new uc[Numdata];
	Adddata(user, Numdata);
	printf("Select data to read : ");
	scanf("%d", &selectdata);
	printf("\nContact channels of %s\n", user[selectdata - 1].name);
	printf("E-mail : %s\tFacebook : %s\t Phonenum : %s ", user[selectdata - 1].email,
		   user[selectdata - 1].fackbook, user[selectdata - 1].phonenum);

	return 0;
}

void Adddata(uc *user, int Numdata) {
	getchar();
	for (int i = 0; i < Numdata; i++)
	{
		printf("Input Data %d\n", i + 1);
		printf("Your name : ");
		gets(user[i].name);
		printf("Your email : ");
		gets(user[i].email);
		printf("Your fackbook : ");
		gets(user[i].fackbook);
		printf("Your Phonenum : ");
		gets(user[i].phonenum);
		printf("\n");
	}
}