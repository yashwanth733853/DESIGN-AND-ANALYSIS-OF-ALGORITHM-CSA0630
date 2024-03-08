#include<stdio.h>
void copyString(char *source,char *destination)
{
	if(*source =='\0')
	{
		*destination = '\0';
		return;
	}
	*destination = *source;
	copyString(source+1,destination+1);
}
int main()
{
	char source[20];
	printf("enter the string:\n");
	scanf("%s",source);
	char destination[20];
	copyString(source, destination);
	printf("Copied string: %s\n", destination);
	return 0;
}