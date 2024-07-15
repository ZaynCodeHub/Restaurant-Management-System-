#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
struct menu
{
	int price;
	char name[20];
	int item_no;
}starter[100],main_course[100],dessert[100];
void menu_edit();
void add_menuitem();
void display_menu();
void display_starter(int i);
void display_main(int i);
void display_dessert(int i);
void admin();
void user();
void billing();
void main_display();
void employee();

int main()
{
	main_display();
}

void main_display()
{
	int i, choice;
	do{
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	for(i=0;i<10;i++)
	{
		printf("*                                                                                                                     *\n");
		if (i==2)
		{
			
			printf("*                                          WELCOME TO MASTER TERMINAL                                                 *\n");
		}
		if (i==3)
		{
			printf("* #1:Admin Login                                                 		                                      *\n");
		}
		if(i==4)
		{
			printf("* #2:User Login                                                                                                      *\n"); 
		}
		if(i==5)
		{
			printf("* #3:Exit                                                                                                               *\n");
		}
		
	}
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			admin();
			break;
		
		case 2:
			user();
			break;
		
		case 3:
			printf("Exiting, Have a Nice Day!");
			sleep(1);
			break;
	}
}while(choice!=3);
}

void menu_edit()
{
	int choice, a, b, c;
	original:
	printf("Would you like to \n");
	printf("<1> Add item to menu\n<2> View menu\n<3> Return");
	scanf("%d", &choice);
	do
	{
		switch (choice)
		{
			case 1:
				add_menuitem();
				goto original;
				break;
			case 2:
				display_menu();
				goto original;
				break;
		}
	}
	while(choice !=3);
}

void display_starter(int i)
{
    i--;
    printf("\n %s............Rs%d", starter[i].name, starter[i].price);
}

void display_main(int i)
{
    i--;
    printf(" %s............Rs%d", main_course[i].name, main_course[i].price);
}

void display_dessert(int i)
{
    i--;
    printf(" %s............Rs%d", dessert[i].name, dessert[i].price);
}

void display_menu()
{
	int i;
	int a,b,c;
	a=starter[i].item_no;
	b=main_course[i].item_no;
	c=dessert[i].item_no;
   printf("\n\t\t\t**MENU**"); printf("\n" "\n" "\n");
   printf(" STARTERS: ");
   printf("\n" "\n");
   printf(" Soup...............Rs140 \n French Fries........Rs100 \n Caesar salad.......Rs200 ");
   display_starter(a);
   printf("\n\n\n");
   printf(" MAIN COURSE: \n");
   printf("\n");
   printf(" Biryani............Rs200\n");
   printf(" Karahi.............Rs1800\n");
   printf(" Naan...............Rs40\n");
   printf(" Steak..............Rs1500\n");
   printf(" Bar.B.Q............Rs1000\n");
   display_main(b);
   printf("\n DESSERTS:\n\n");
   printf(" Custard............Rs250\n");
   printf(" Ice-cream..........Rs150 \n");
   printf(" Lava cake..........Rs300\n");
   display_dessert(c);
   printf("\n DRINKS:\n\n");
   printf(" Coca cola..........Rs60\n");
   printf(" Fanta..............Rs60\n");
   printf(" Tea................Rs50\n");
   printf(" Green tea..........Rs80");	
   sleep(10);
   system("cls");
}

void add_menuitem()
{
	int choice,i=0,a,b,c;
	printf("Which section would you like to add an item in?\n");
	printf("<1> Starter Items\n<2> Main Course\n<3> Deserts\n<4> Return to previous screen\n");
	scanf("%d", &choice);
	switch (choice)
	{
			case 1:
				starter[i].item_no=i+1;
				starter[i].price=i+1;
				printf("Name of new starter: ");
			    scanf("%s", starter[i].name);
			    printf("Price of new starter: ");
			    scanf("%d", &starter[i].price);
			    printf("Enter the item number: ");
			    scanf("%d", &starter[i].item_no);
			    a=starter[i].item_no;
			    break;
			
			case 2:
				main_course[i].item_no=i+1;
				main_course[i].price=i+1;
				printf("Name of new main dish: ");
			    scanf("%s", main_course[i].name);
			    printf("Price of new starter: ");
			    scanf("%d", &main_course[i].price);
			    printf("Enter the item number: ");
			    scanf("%d", &main_course[i].item_no);
			    b=main_course[i].item_no;
			    break;
			    
			case 3:
				dessert[i].item_no=i+1;
				dessert[i].price=i+1;
			    printf("Name of new dessert: ");
			    scanf("%s", dessert[i].name);
			    printf("Price of new starter: ");
			    scanf("%d", &dessert[i].price);
			    printf("Enter the item number: ");
			    scanf("%d", &dessert[i].item_no);
			    c=dessert[i].item_no;
			    break;		
	}
}

void admin()
{
	char username[50];
	char password[20];
	char username2[50];
	char password2[20];
	char address[50];
	int choice;
	int x;
    int y;
    int decision;
    do
    {
	printf("\t\t\tWelcome Admin\t\t\t\n");
	printf("\n\n<1> Register New Admin\n<2> Login to Admin Account\n<3> Exit to main terminal\n");
	scanf("%d", &choice);
	if(choice==1)
	{
	system("cls");
	printf("Welcome new Admin.\n");
	printf("Register your account\n");
	FILE *fp;
	fp=fopen("admin.txt","w");
	if(fp==NULL)
	{
		printf("An Unknown error occured\n");
	}
	else
	{
	 printf("enter username: ");
    scanf("%s", username);
    printf("enter password: ");
    scanf("%s", password);
    fprintf(fp, "%s %s", username, password);
    fclose(fp);
    sleep(1);
    system("cls");
    }
    }
    else if(choice==2)
    {
    	FILE *fp = fopen("admin.txt","r");
    	char username_read[50];
    	char password_read[20];
    	fscanf(fp,"%s %s", username_read, password_read);
    	system("cls");
    	printf("Enter your credentials\n");
    	printf("Username: \n");
    	printf("Password: \n");
    	scanf("%s", username2);
    	scanf("%s", password2);
    	x=strncmp(username_read,username2,20);
    	y=strncmp(password_read,password2,20);
    	if(x==0 && y==0)
    	{
    		printf("Login successful\n");
    		printf("Welcome %s\n", username2);
    		do
			{
    		printf("\n\n<1> Edit/View Menu\n<2> Manage Employees\n<3> Return to main terminal ");
    		scanf("%d", &decision);
    		if(decision==1)
    		{
    			system("cls");
    			menu_edit();
    			sleep(5);
    			system("cls");
			}
			else if(decision==2)
			{
				system("cls");
    			employee();
    			sleep(5);
    			system("cls");
			}
			}while(decision!=3);
		}
		else
		{
			printf("Entered credentials are wrong.");
			sleep(1);
			system("cls");
		}
	}
	}while(choice!=3);
}

void user()
{
	char username[50];
	char password[20];
	char username2[50];
	char password2[20];
	char address[50];
	int choice,choice2;
	int x;
    int y;
    int decision;
    do
    {
	printf("\t\t\tWelcome User\t\t\t\n");
	printf("\n\n<1> Register New User\n<2> Login to User Account\n<3> Exit to main terminal\n");
	scanf("%d", &choice);
	if(choice==1)
	{
	system("cls");
	printf("Welcome new user.\n");
	printf("Register your new account\n");
	FILE *fp;
	fp=fopen("user.txt","w");
	if(fp==NULL)
	{
		printf("An Unknown error occured\n");
	}
	else
	{
	 printf("enter username: ");
    scanf("%s", username);
    printf("enter password: ");
    scanf("%s", password);
    fprintf(fp, "%s %s", username, password);
    fclose(fp);
    
    FILE *ab;
    ab=fopen("address.txt","w");
    if(ab==NULL)
    {
    	printf("An unknown Error Occured\n");
	}
	else
	{
		printf("Enter your address\n");
		scanf("%s",address);
		fprintf(ab,"%s",address);
		fclose(ab);
	}
    }
    sleep(1);
    system("cls");
}
    else if(choice==2)
    {
    	FILE *fp = fopen("user.txt","r");
    	char username_read[50];
    	char password_read[20];
    	fscanf(fp,"%s %s", username_read, password_read);
    	system("cls");
    	printf("Enter your credentials\n");
    	printf("Username: \n");
    	printf("Password: \n");
    	scanf("%s", username2);
    	scanf("%s", password2);
    	x=strncmp(username_read,username2,20);
    	y=strncmp(password_read,password2,20);
    	if(x==0 && y==0)
    	{
    		printf("Login successful\n");
    		printf("Welcome %s\n", username);
    		checkpoint:
    		printf("\n\n<1> View Menu!\n<2>Start Ordering Now!!\n<3> Exit");
    		scanf("%d", &decision);
    		if(decision==1)
    		{
    		    system("cls");
    			printf("\n                 **MENU**           "); printf("\n" "\n" "\n"); 
                printf(" STARTERS: ");
                printf("\n" "\n");
                printf(" Soup...............Rs140 \n French Fries........Rs100 \n Caesar salad.......Rs200 ");
                printf("\n\n\n");
                printf(" MAIN COURSE: \n");
                printf("\n");
                printf(" Biryani............Rs200\n");
                printf(" Karahi.............Rs1800\n");
                printf(" Naan...............Rs40\n");
                printf(" Steak..............Rs1500\n");
                printf(" Bar.B.Q............Rs1000\n");
                printf("\n DESSERTS:\n\n");
                printf(" Custard............Rs250\n");
                printf(" Ice-cream..........Rs150 \n");
                printf(" Lava cake..........Rs300\n");
                printf("\n DRINKS:\n\n");
                printf(" Coca cola..........Rs60\n");
                printf(" Fanta..............Rs60\n");
                printf(" Tea................Rs50\n");
                printf(" Green tea..........Rs80");
                printf("Press 5 to return\n");
                scanf("%d", &choice2);
                if( choice2==5)
                {
	               goto checkpoint;
                }
			}
			else if(decision==2)
			{
				system("cls");
    			billing();
    			scanf("%d", &choice2);
    			if( choice2==5)
                {
	               goto checkpoint;
                }
			}
		}
		else
		{
			printf("Entered credentials are wrong.");
			sleep(1);
			system("cls");
		}
	}
}while(choice!=3);
}

void employee()
{
	printf("Jasim (The Chef)...... Pay= Rs 55k\n\n");
	printf("Rabeet (Waiter)....... Pay= Rs 20k\n\n");
	printf("Shaheer (Waiter)...... Pay= Rs 20k\n\n");
	printf("Zain (Delivery Boy)..... Pay= Rs 15k\n\n");
}

void billing()
{	
	int  course,n,y,bill=0;
	char course1,a,b,c,d,e;
	printf("Welcome! Place Your Order\n\n\n");
	Z:
	printf("<1> Starters\n<2> Main Courses\n<3> Desserts\n<4> Drinks\n");
	scanf("%d",&course);
	
	
	switch (course)
	{
		case 1:
			{
			
		printf("<a> Soup\n<b> French fries\n<c> Caesar Salad\n");
		scanf(" %c",&course1);
		
		switch (course1)
		{
			case 'a':
		{
			printf("Enter the number of Soup: ");
			scanf("%d",&n);
			bill=bill+(n*140);
		}
		break;
		case 'b':
		{
			printf("Enter the number of French Fries: ");
			scanf("%d",&n);
			bill=bill+(n*100);
		}
		break;
		case 'c':
		{
			printf("Enter the number of Caser salad: ");
			scanf("%d",&n);
			bill=bill+(n*200);
		}
		break;
		}
			}
		break;
	
		
		case 2:
		{
			
			printf("<a> Biryani\n<b> Karahi\n<c> Naan\n<d> Steak\n<e> B.B.Q\n: ");
		scanf(" %c",&course1);
		
		switch (course1)
		{
		
		case 'a':
		{
			printf("Enter the number of Biryani: ");
			scanf("%d",&n);
			bill=bill+(n*200);
		}
		break;
		case 'b':
		{
			printf("Enter the number of Karahi: ");
			scanf("%d",&n);
			bill=bill+(n*1800);
		}
		break;
		case 'c':
		{
			printf("Enter the number of Naan: ");
			scanf("%d",&n);
			bill=bill+(n*40);
		}
		break;
		case 'd':
		{
			printf("Enter the number of Steak: ");
			scanf("%d",&n);
			bill=bill+(n*1500);
		}
		break;
		case 'e':
		{
			printf("Enter the number of Bar.B.Q: ");
			scanf("%d",&n);
			bill=bill+(n*1000);
		}
		break;
		}
		}
		break;
		
			case 3:
			{
		printf("<a> Custard\n<b> Ice-cream\n<c> Lava Cake\n: ");
		scanf(" %c",&course1);
		
		switch (course1)
		{
			
			case 'a':
		{
			printf("Enter the number of Custard: ");
			scanf("%d",&n);
			bill=bill+(n*250);
		}
		break;
		case 'b':
		{
			printf("Enter the number of Ice-cream: ");
			scanf("%d",&n);
			bill=bill+(n*150);
		}
		break;
		case 'c':
		{
			printf("Enter the number of Lava cake: ");
			scanf("%d",&n);
			bill=bill+(n*300);
		}
		break;
		}
		}
	 	break;



	 case 4:
	 	{
		printf("<a> Coca Cola\n<b> Fanta\n<c> Tea\n<d> Green Tea\n: ");
		scanf(" %c",&course1);
		
		switch (course1)
		{
		case 'a':
		{
			printf("Enter the number of coca cola: ");
			scanf("%d",&n);
			bill=bill+(n*60);
		}
		break;
		case 'b':
		{
			printf("Enter the number of Fanta: ");
			scanf("%d",&n);
			bill=bill+(n*60);
		}
		break;
		case 'c':
		{
			printf("Enter the number of Tea: ");
			scanf("%d",&n);
			bill=bill+(n*50);
		}
		break;
		case 'd':
		{
			printf("Enter the number of Green Tea: ");
			scanf("%d",&n);
			bill=bill+(n*80);
		}
		break;
		}
		}
		break;
	}

	printf("<1> Your order is complete\n<2> You want to add more items: ");
	scanf("%d",&y);
	
	if(y==1)
	{
		printf("\n\n\nTotal Bill of all your meals ordered =Rs%d",bill);
	}
	else if(y==2)
	{
		goto Z; 
	}
	return 0;
}
