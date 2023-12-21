#include <stdio.h> 
#include <string.h> 
 
main() 
{ 
    char email[20]; 
    char password[20]; 
 
 
    printf("Enter your email : \n"); 
    gets(email);
 
    printf("Enter your password : \n"); 
    gets(password);
 
    if(strcmp(email,"4360dipengediya@gmail.com")==0)
	{ 
 		printf("\n Correct E-mail ID");
    }
	else
	{ 
   		printf("\n Incorrect E-mail ID"); 
	} 
	
	if(strcmp(password,"dipen@123")==0)
	{ 
        printf("\n Correct password"); 
    }
	else
	{ 
    	printf("\n Incorrect password"); 
	}
 
} 