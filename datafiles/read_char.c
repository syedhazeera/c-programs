#include <stdio.h>

int main()
{
    FILE* fp;
    int ch;

    fp = fopen("text1.txt", "r");
    if (fp == NULL) {
        printf("Error in file opening...\n");
        return -1;
    }

    printf("Content of the file:\n");
    /*here we are using infinite loop to print value of 
	EOF, loop will be terminate as we got EOF*/
    while (1) {
        ch = getc(fp); //read one character
        printf("%c [%d],", ch, ch);
        if (ch == EOF) {
            break; //terminate loop
        }
    }

    //close the file
    fclose(fp);

    return 0;
}

/*output:
$ ./read_char
Content of the file:
" [34],h [104],e [101],l [108],l [108],o [111],w [119],o [111],r [114],l [108],d [100]," [34],▒ [-1],
*/