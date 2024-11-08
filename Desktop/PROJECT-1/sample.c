/*ASSIGNMENT NO. 2*/

/*program to develop an arithmetic calculator. Add the modulus (%)
operator and provision of negative numbers.*/

#include<stdio.h>
int main()
{	
	int CHOICE,a,b;
	float c,d,e,f,g;
		
	printf("********CALCULATOR********\n");
	printf("This is the arithmetic calculator\n");
	printf("Enter your choice:\n1.Addition '+'\n2.Subtraction '-'\n3.Multiplication '*'\n4.Division '/'\n5.Modulus \nYour choice is:");
		
	scanf("%d",& CHOICE);
	
	if(CHOICE<=5)
	{
		switch(CHOICE)
		{		
			case 1:
			
			printf("Enter your numbers\n");
			scanf("%d",&a);
			scanf("%d",&b);
			
			printf("Your answer is:");
			c=a+b;
			printf("%f\n",c);
					
			break;
				
			case 2:
			
			printf("Enter your numbers\n");
			scanf("%d",&a);
			scanf("%d",&b);
			
			printf("Your answer is:");
			d=a-b;
			printf("%f\n",d);
					
			break;

			case 3:
			
			printf("Enter your numbers\n");
			scanf("%d",&a);
			scanf("%d",&b);
			
			printf("Your answer is:");
			e=a*b;
			printf("%f\n",e);
					
			break;		
					
			case 4:
			
			printf("Enter your numbers\n");
			scanf("%d",&a);
			scanf("%d",&b);
			
			if (b==0)
			{	
				printf("Denominator can not be zero\n");
			}
			else 
			{
				f=a/b;
				printf("Your answer is:");
				printf("%f\n",f);
			}		
						
			break;
					
			case 5:
			
			printf("Enter your numbers\n");
			scanf("%d",&a);
			scanf("%d",&b);
			
			if (b==0)
			{	
				printf("Denominator can not be zero\n");
			}
			else 
			{
				g=a%b;
				printf("Your answer is:");
				printf("%f\n",g);
			}		
						
			break;		
		}	
	}		
	else
	{
	printf("Wrong input\n");
	}


	return 0;
}
