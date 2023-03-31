#include <stdio.h>
#include<conio.h>

void main()
{
	int num, i=0;
	
	/*Structure Declaration*/
	struct student
	{
		char name[30];
		int rollno;
		int marks;
	};
	
	struct student std[10];
	
	printf("Enter the number of students:");
	scanf("%d",&num);
	
	/*Reading student details*/
	
	for(i=0;i<num;i++)
	{
		printf("\n Enter the details for student %d",i+1);
		printf("\n\n Name");
		scanf("%s",std[i].name);
		printf("\n Roll no.");
		scanf("%d",&std[i].rollno);
		printf("\n Total Marks");
		scanf("%d",&std[i].marks);
	}
	
	/* Displaying student details*/
	printf("\n Press any key to display the student details!");
	getch();
	
	for(i=0;i<num;i++)
	printf("\n student %d \n Name %s \n Roll no %d \n Total marks %d\n",i+1,std[i].name, std[i].rollno, std[i].marks);
	getch();
}
