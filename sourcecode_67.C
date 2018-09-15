#include <stdio.h>
#include <conio.h>
int main()
 {
    FILE *fp;
    char c;
    fp = fopen("c:\\prg.txt","r");
    do {
	 c = getc(fp);
	 putchar(c);
    }
    while(c != EOF);
    fclose(fp);
    getch();
    return 0;
}