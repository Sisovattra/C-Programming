#include<stdio.h>
 int main()
 {
 	int chc;
 	puts ("Menu");
 	puts ("1. Create a Directory");
 	puts ("2. Delete a Directory");
 	puts ("3. Show a Directory");
 	puts ("Exit");
 	   puts (" ");  /*display a blank line*/
 	puts ("Your choice");
 	   chc = getchar (); /* accept choice */
 	fflush (stdin);
	switch (chc)
	{
		case '1':
			puts ("Your choice is 1");
			break;
		case '2':
		    puts ("Your choice is 2");
			break;
		case '3':
		    puts ("Your choice is 3");
			break;
		case '4':
		    puts ("Your choice is 4");
			break;
		default :
		    puts ("Invalid Choice");
			/*no break required here*/				
	}
	
		    
 	   
 }
