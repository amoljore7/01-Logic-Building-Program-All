#include<stdio.h>
#include<malloc.h>

void Display(char *str)
{
	if(str == NULL)	
		{
			return;
		}
	
	if(*str != '\0')
		{
			printf("%c\t",*str);
			str++;
		
			Display(str);	
		}
}

int main(int argc, char* argv[])
{
	char iArr[30]="marvellous";
	
	Display(iArr);
	
	return 0;
}
