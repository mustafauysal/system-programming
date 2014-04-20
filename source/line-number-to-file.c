#include <stdio.h>

main(int argc,char *argv[] )
{
     FILE *fp;
     char buff[50];
     int i;
	if(argc != 2){
		printf("Please, enter a filename\n");
	 return -1;
	} else {
     	         fp = fopen(argv[1],"w");
    		 for (i = 1; i <= 15; i++)
     			fprintf(fp, "%s Line number %d\n", buff, i);
    		 fclose(fp);
	return 0;
	}
}
