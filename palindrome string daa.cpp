#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool ispalindrome(char *str,int start,int end)
{
	if(start>=end)
	{
		return true;
	}
	if(str[start]!=str[end])
	{
		return false;
	}
	return ispalindrome(str,start+1,end-1);
}
int main()
{
	char str[100];
	printf("enter the string:\n");
	scanf("%s",str);
	int len = strlen(str);
	if(str[len -1] =='\n')
	{
		str[len-1]='\0';
	}
	if(ispalindrome(str,0,len-1))
	{
		printf("the given string is palindrome\n");
	}
	else
	{
		printf("the given string is not an palindrome\n");
	}
}