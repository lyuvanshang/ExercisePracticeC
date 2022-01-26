#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{	
		char chuoi[100];
		printf("moi ban nhap chuoi: ");
		gets(chuoi);
		puts(chuoi);
		int i;
		for ( i=0; i<strlen(chuoi); i++) // abc ; 2=3-1 
		{
			if(i== strlen(chuoi)-1)
			{
				printf("%c",chuoi[i]);
			} else
			
				printf("%c_",chuoi[i]);
		}
		
}
