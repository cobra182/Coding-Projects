#include <iostream>
#include <stdlib.h>
#include <string.h>



int main(void)

{

FILE *f = fopen("/proc/cpuinfo", "r");
char *a = malloc(256);
char *b = malloc(128);
char *c = malloc(128);

while (!feof(f))
{
	fgets(a,512,f);
	if (strlen(a) == 1) continue;
	sscanf (a, "%[^\t:] : %[^\t\n]", b, c);
	printf("%s = %s\n", b, c);

}

fclose(f);
}
