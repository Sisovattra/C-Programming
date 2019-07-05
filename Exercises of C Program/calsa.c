/* Write a program to calculate the salary
    Grade       HRA     PF       TAX
	A           45%     20%      20%
	B           35%     15%      10%
	C           30%     10%      8%
	D           20%     5%       5%  */

#include <stdio.h>
main()
{
	char name [12],id [5],grade;
	float  basic, hra, tax, job, others;
	float pf;
	float net_salary;	
	printf("Enter Name: ");
	scanf("%s",&name);
	
	printf("Enter Basic Salary ($): ");
	scanf("%f",&basic);

	printf("Enter ID: ");
	scanf("%s",&id);
	printf("Enter Grade:");
    scanf(" %c",&grade);
	switch (grade)
	{
		case 'A':
			net_salary=basic+basic*0.45-basic*0.20-basic*0.20;
			break;
		case 'B':
			net_salary=basic+basic*0.35-basic*0.15-basic*0.10;
			break;
		case 'C':
			net_salary=basic+basic*0.30-basic*0.10-basic*0.08;
			break;
		case 'D':
			net_salary=basic+basic*0.20-basic*0.05-basic*0.05;
			break;
		default :
			printf("Invalid Grade");	
		
	}
	printf("\nName: %s",name);
	printf("\nEmployee ID: %s",id);
	printf("\nNet_Salary: %f",net_salary);
}

