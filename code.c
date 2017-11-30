#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void success ()
{
	printf("Congrats! You successfully completed the attack!\n");
}

void validate (char *pass)
{
	if(strcmp(pass, "KALILINUX")==0)
	{
		printf("ACCESS GRANTED\n");
	}
	else
	{
		printf("ACCESS DENIED\n");
	}
}

	
int main()
{
	char pass[20];
	printf("Enter the password\n");
	scanf("%s", pass);

	validate (pass);
	return 0;
}
