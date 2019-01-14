using System;  
                      
public class DuplicateCharacters  
{  
    public static void Main()  
    {  
        String str = "Great responsibility";  
        int count;  
          
        //Converts given string into character array  
        char[] string1 = str.ToCharArray();  
          
        Console.WriteLine("Duplicate characters in a given string: ");  
        //Counts each character present in the string  
        for(int i = 0; i <string1.Length; i++) 
        {  
            count = 1;  
            for(int j = i+1; j <string1.Length; j++) 
            {  
                if(string1[i] == string1[j] && string1[i] != ' ') 
                {  
                    count++;  
                    //Set string1[j] to 0 to avoid printing visited character  
                    string1[j] = '0';  
                }  
            }  
            //A character is considered as duplicate if count is greater than 1  
            if(count > 1 && string1[i] != '0')  
                Console.WriteLine(string1[i]);  
        }  
    }  
}  
