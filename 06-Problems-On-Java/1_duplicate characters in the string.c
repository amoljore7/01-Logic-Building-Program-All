#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "amol  balasaheb jore";  
    int count;  
     int i,j; 
    printf("Duplicate characters in a given string: \n");  
    //Counts each character present in the string  
    for(i = 0; i < strlen(string); i++)
	 {  
        count = 1;  
        for( j = i+1; j < strlen(string); j++)
		 {  
            if(string[i] == string[j] && string[i] != ' ')
			 {  
                count++;  
                //Set string[j] to 0 to avoid printing visited character  
                string[j] = '0';  
            }  
        }  
        //A character is considered as duplicate if count is greater than 1  
        if(count > 1 && string[i] != '0')  
            printf("%c\t", string[i]);  
    }  
   
    return 0;  
}  
