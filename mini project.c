#include<stdio.h>
#include<string.h>

void main()
{
	char name[20], Rtype[20];
	char Rnum;
	int day, discount;
	float total, Rprice, bill;
	
	const float MASTER = 300, SINGLE = 200, TWIN = 275, BILL = 50;
	
	printf("**********************************************");
	printf("\n	[WELCOME TO FOUR/H/ HOMESTAY]");
	printf("\n**********************************************");
	
	printf("\nEnter your name: ");
	gets(name);
	printf("\nRooms Type: MASTER BEDROOM (1)   SINGLE1(2)   SINGLE2(3)   TWIN SHARING(4)   ");
	printf("\n\nEnter Rooms Type number: ");
	scanf("%c", &Rnum);
	printf("Enter number of days: ");
	scanf("%d", &day);
	printf("Enter the discount code(IF NO THEN ENTER 0!):");
	scanf("%d", &discount);
	
	switch(Rnum)
	{  
		case'1': case'2': case'3': case'4':
		
			switch(Rnum)
			{
			 	case'1':
					Rprice = MASTER;
					strcpy(Rtype,"Master Bedroom");
					break;
			
				case'2': 
					Rprice = SINGLE;
					strcpy(Rtype,"Single Bedroom 1");
					break;
					
				case'3': 
					Rprice = SINGLE;
					strcpy(Rtype,"Single Bedroom 2");
					break;
			
				case'4': 
					Rprice = TWIN;
					strcpy(Rtype,"Twin Sharing");
					break;
				}
			
			printf("\n**********************************************");
	 		printf("\n            [PAYMENT RECEIPT]");
			printf("\n**********************************************");
	
			bill = BILL * day;
			
			
			if (discount == 24681)
			{
			total = ((Rprice * day) + bill) * 0.9;
			
			printf("\nCustomer Name   : %s", name);
	        printf("\nRoom Type       : %s", Rtype);
	        printf("\nRoom Price      : RM %.2f", Rprice);
			printf("\nNumber of days  : %d", day);
			printf("\nUtility bills   : RM %.2f (RM %.2f per day)", bill, BILL);
			printf("\nDoes discount code activated: Yes(10%%)");
			printf("\nBill            : RM %.2f", total);
			}
			else if (discount == 13579)
			{
			total = ((Rprice * day) + bill) * 0.7;
			
			printf("\nCustomer Name   : %s", name);
	        printf("\nRoom Type       : %s", Rtype);
	        printf("\nRoom Price      : RM %.2f", Rprice);
			printf("\nNumber of days  : %d", day);
			printf("\nUtility bills   : RM %.2f (RM %.2f per day)", bill, BILL);
			printf("\nDoes discount code activated: Yes(30%%)");
			printf("\nBill            : RM %.2f", total);
			}
			else
			{
			total = (Rprice * day) + bill;
			
			printf("\nCustomer Name   : %s", name);
	        printf("\nRoom Type       : %s", Rtype);
	        printf("\nRoom Price      : RM %.2f", Rprice);
			printf("\nNumber of days  : %d", day);
			printf("\nUtility bills   : RM %.2f (RM %.2f per day)", bill, BILL);
			printf("\nDoes discount code activated: No");
			printf("\nBill            : RM %.2f", total);
		 	}
			break;
			
			
		default:
			printf("Invalid Room Type.");
			break;
			
	}	
}
