#include<stdio.h>
//#include<conio.h>
int main()
{
   FILE *fp;
   char ch, fname[30];
   int noOfChar=0, noOfSpace=0, noOfTab=0, noOfNewline=0;
   printf("Enter file name with extension: ");
   //gets(count.txt);
   fp = fopen("count.txt", "r");
   while(fp)
   {
      ch = fgetc(fp);
      if(ch==EOF)
         break;
      noOfChar++;
      if(ch==' ')
         noOfSpace++;
      if(ch=='\t')
         noOfTab++;
      if(ch=='\n')
         noOfNewline++;
   }
   fclose(fp);
   printf("\nNumber of characters = %d", noOfChar);
   printf("\nNumber of spaces = %d", noOfSpace);
   printf("\nNumber of tabs = %d", noOfTab);
   printf("\nNumber of newline = %d", noOfNewline);
   //getch();
   return 0;
}

/*output:
$ ./3_count_bla_tab_nwline
Enter file name with extension:
Number of characters = 64
Number of spaces = 7
Number of tabs = 3
Number of newline = 2
*/