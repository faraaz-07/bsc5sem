#include <stdio.h>
int main()
{   
    char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	if((65<=ch&&ch<=90)||(97<=ch&&ch<=122))
	{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("The entered character is vowel.");
	else 
	printf("The entered character is consonant.");
}
     else 
     printf("The entered chracter is invalid.");
	return 0;
}
