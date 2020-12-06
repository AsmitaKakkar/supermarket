#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void mainmenu()
{
	printf("-----------------------------------------------------------------\n");
	printf("\t\t\tMAIN MENU\n");
	printf("-----------------------------------------------------------------\n\n\n");
	printf("1. ADMINISTRATOR\n");
	printf("2. CUSTOMER \n");
	printf("3. EXIT \n");
	printf("-----------------------------------------------------------------\n");
}



void administrator()
{
	printf("------------------------------------------------------------------\n");
	printf("\t\t\tADMINISTRATOR BLOCK\n");
	printf("------------------------------------------------------------------\n\n\n");
	printf("1. To add a new product\n");
	printf("2. To delete an existing product\n");
	printf("3. To modify an existing product\n");
	printf("4. To display all products\n");
	printf("5. To display product menu\n");
	printf("6. Back to main menu\n");
	printf("--------------------------------------------------------------------\n");
}


void add()
{
	printf("We will add new product here!!");
}



void delete()
{
	printf("We will delete an existing product here!!");
}



void modify()
{
	printf("We will modify an existing product here!!");
	
}


void display_All()
{
	printf("We will display all products here!!");
	
}


void product_Menu()
{
	printf("We will display product menu here!!");
}



void ADMINISTRATOR()
{
	do
				
		{
			int admin;
			administrator();
			printf("What you want to do?\n");
			scanf("%d",&admin);	
						
			switch(admin)
			{
				case 1:
					{
						add();
						printf("Press any key to continue.......\n");
						getch();
						break;
					}
				case 2:
					{
						delete();
						printf("Press any key to continue.......\n");
						getch();
						break;
					}
				case 3:
					{
						modify();
						printf("Press any key to continue.........\n");
						getch();
						break;
					}
				case 4:
					{
						display_All();
						printf("Press any key to continue.........\n");
						getch();
						break;
					}
				case 5:
					{
						product_Menu();
						printf("Press any key to continue.........\n");
						getch();
						break;
					}
				case 6:
					{
						main();
						break;
					}
				default:
					{
						printf("ERROR!! Wrong choice\nPlease enter correct choice(1-6)\n");
						printf("Press any key to continue.......\n");
						getch();
					}
			}
		}
					
		while(1);
}







void costumer()
{
	printf("costumer block:\n");
}


int main()
{
	int choice;
	
	do
	{
		mainmenu();
		printf("Are you a costumer or administrator here?\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				{
					ADMINISTRATOR();
					
					printf("Press any key to continue.......\n");
					getch();
					break;
				}
			case 2:
				{
					costumer();
					printf("Press any key to continue.......\n");
					getch();
					break;
				}
			case 3:
				{
					exit(1);
				}
			default:
				{
					printf("ERROR!! wrong option!!\n Please enter correct option(1-3)\n");
					printf("Press any key to continue\n");
					getch();
				}
		}
	}
	while(1);
	
	
	return 0;
}
