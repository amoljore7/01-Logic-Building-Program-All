#include<stdio.h>

void DisplaySchedule(char chDiv)
{
	if(NULL == chDiv)
		{
			return;
		}
		printf("\n\n");
	switch(chDiv)
		{
			case 'A':
				printf("\t\tYour Exam at 7 AM\n");
				break;
			case 'B':
				printf("\t\tYour Exam at 8:30 AM\n");
				break;
			case 'C':
				printf("\t\tYour Exam at 9:20 AM\n");
				break;
			case 'D':
				printf("\t\tYour Exam at 10:30 AM\n");
				break;
			default :
				printf("\t\tPlz Enter Valide Division\n");
		}
}
int main(int argc, char* argv[])
{
	char ch='\0';
	
	printf("\t\tEnter Division A to D:\t");
	scanf("%c",&ch);
	
	DisplaySchedule(ch);
	
	return 0;
}
