#include <stdio.h>

int main()
{
	/*Variable to save the password and check if the password is correct or not*/
	int key;
	int check;
	
	/*Entering the password*/
	printf("Enter Password:");
	scanf("%d",&key);
	
	/*Entering the password again to confirm the password*/
	printf("Enter Key again to confirm:");
	scanf("%d",&check);
	
	/*Checking if the password is correct or not*/
	if (key == check)
	{
		printf("Login Succesful !");
	}
	else
	{
		printf("Login Failed\n");
		printf("Password invalid !");
	}
	return 0;
}