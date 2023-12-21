#include<stdio.h>
#include<string.h>

int main()
{

    char str[100];  
   	int i,len,a=0;
   
    printf("Enter the string: ");
    gets(str);
    
  	len = strlen(str);
  	 	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			a = 1;
		} 
	}
	if(a == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	} 
     
}