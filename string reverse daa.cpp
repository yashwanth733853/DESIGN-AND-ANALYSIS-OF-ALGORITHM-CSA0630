#include<stdio.h>
#include<string.h>
void reverse_string(char *str, int start, int end)
{
	if(start>=end)
	{
		return;
	}
	char temp = str[start];
	str[start]= str[end];
	str[end] = temp;
	reverse_string(str, start+1, end-1);
}
int main()
{
	char str[100];
	printf("Enter a string:\n");
	scanf("%s",str);
	int len = strlen(str);
	if(str[len - 1] == '\n')
	{
		str[len - 1] ='\0';
	}
	reverse_string(str,0,len-1);
	printf("Reversed string: %s\n",str);
	return 0;
}