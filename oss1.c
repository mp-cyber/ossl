# include <stdio.h>
# include <string.h>
#include <stdlib.h>
int main( )
{

	FILE *file ;
	char data[20]= "This is a file";

	file = fopen("home/mp/osslab/testfile.txt", "w+") ;
	system("cd");
	system("pwd");
	if ( file == NULL )
	{
		perror("error");
		//printf( " failed to open." ) ;
	}
	else
	{
		
		printf("The file is now opened.\n") ;
		if ( strlen ( data ) > 0 )
		{
			
			fputs(data, file) ;
			fputs("\n", file) ;
		}
		fclose(file) ;
		
		printf("Data successfully written \n");
		printf(" file is now closed.") ;
	}
	return 0;		
}
