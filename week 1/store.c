#include<stdio.h>
struct student
{
	char name[30];
	int rollno;
	int marks;
}s[10];
int main()
{
	int i,n;
	printf("Enter no. of students:");
	scanf("%d",&n);
	for(i = 0; i < n; i++){
	
	printf("Enter name of student : ");
	scanf("%s",&s[i].name);

	printf("Enter roll no : ");
	scanf("%d" ,&s[i].rollno);
	
	printf("Enter marks :");
	scanf("%d", &s[i].marks);
	}
	for (int i = 0; i< n; i++)
{
	printf("student information: \n");
	printf("name: ");
	puts(s[i].name);
	printf("\nroll no : %d",s[i].rollno);
	printf("\nmarks : %d",s[i].marks); 	
	}	
	return 0;
}
