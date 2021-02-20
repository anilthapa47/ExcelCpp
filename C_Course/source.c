#include<stdio.h>
#include <stdlib.h>
int main()
{
 
    FILE *fp;   /* file pointer*/
    int i;
    //fName = "some.txt";
    char fName[20],ch,character[20];
 
   // printf("\nEnter file name to create :");
    //scanf("%s",fName);
 
    /*creating (open) a file*/
    fp=fopen("some.txt","w");
    /*check file created or not*/
    if(fp==NULL)
    {
        printf("File does not created!!!");
        exit(0); /*exit from program*/
    }
 
    printf("File created successfully.");
    /*writting into file*/
    putc('A',fp);
    putc('B',fp);
    putc('C',fp);
    putc('F',fp);
 
    printf("\nData written successfully.");
    fclose(fp);
 
    /*again open file to read data*/
    fp=fopen("some.txt","r");
    if(fp==NULL)
    {
        printf("\nCan't open file!!!");
        exit(0);
    }
 
    printf("Contents of file is :\n");
    ch =fgetc(fp);
    while( ch !=EOF)
    {
	    i=0;
	    character[i] = (char)ch;
	    printf("%c\n", character[i]);	
        i++;
        ch =fgetc(fp);
    }
    printf("%d",i);
    printf("File is made");	 
    fclose(fp);
    return 0;
}
