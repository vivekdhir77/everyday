/*
#############################
""""\:::::::::::::::::::/""""
""""""\:::::::::::::::/""""""
""""""""\:::::::::::/""""""""
""""""""""\:::::::/""""""""""
""""""""""""\:::/""""""""""""
""""""""""""""|""""""""""""""
#############################
"""""""""""""""""""""""""""""
"""""""_______________"""""""
"""""""""""""|||"""""""""""""
"""""""""""""|||"""""""""""""
"""""""""""""|||"""""""""""""
"""""""""""""|||"""""""""""""
"""""""""""""|||"""""""""""""
"""""""_______________"""""""
"""""""""""""""""""""""""""""
#############################
""""\:::::::::::::::::::/""""
""""""\:::::::::::::::/""""""
""""""""\:::::::::::/""""""""
""""""""""\:::::::/""""""""""
""""""""""""\:::/""""""""""""
""""""""""""""|""""""""""""""
#############################
"""""""""""""""""""""""""""""
""""||@@@@@@@@@@@""""""""""""
""""||"""""""""""""""""""""""
""""||"""""""""""""""""""""""
""""||>>>><<<<   """"""""""""
""""||"""""""""""""""""""""""
""""||"""""""""""""""""""""""
""""||@@@@@@@@@@@""""""""""""
"""""""""""""""""""""""""""""
#############################
"""""""""""""""""""""""""""""
""""||"""""""""//""""""""""""
""""||""""""//"""""""""""""""
""""||"""//""""""""""""""""""
""""||//"""""""""""""""""""""
""""||\\"""""""""""""""""""""
""""||"""\\""""""""""""""""""
""""||""""""\\"""""""""""""""
""""||"""""""""\\""""""""""""
"""""""""""""""""""""""""""""
#############################
*/

#include<stdlib.h>
#include<stdio.h>

int a=4, x= 16, c=14, m=9;

int myRand()
{
	x= ((a*x)+c)%m;
	return x;
}

int main()
{
	int i=10;
	printf("\n");
	while(i--)
	{
		printf("%d\n",myRand());
	}
	printf("\n");
	
	printf("%d", RAND_MAX);	
}
/*
""""\:::::::::::::::::::/""""
""""""\:::::::::::::::/""""""
""""""""\:::::::::::/""""""""
""""""""""\:::::::/""""""""""
""""""""""""\:::/""""""""""""
""""""""""""""|""""""""""""""
#############################
"""""""""""""""""""""""""""""
"""""""_______________"""""""
"""""""""""""|||"""""""""""""
"""""""""""""|||"""""""""""""
"""""""""""""|||"""""""""""""
"""""""""""""|||"""""""""""""
"""""""""""""|||"""""""""""""
"""""""_______________"""""""
"""""""""""""""""""""""""""""
#############################
""""\:::::::::::::::::::/""""
""""""\:::::::::::::::/""""""
""""""""\:::::::::::/""""""""
""""""""""\:::::::/""""""""""
""""""""""""\:::/""""""""""""
""""""""""""""|""""""""""""""
#############################
"""""""""""""""""""""""""""""
""""||===========""""""""""""
""""||"""""""""""""""""""""""
""""||"""""""""""""""""""""""
""""||========"""""""""""""""
""""||"""""""""""""""""""""""
""""||"""""""""""""""""""""""
""""||===========""""""""""""
"""""""""""""""""""""""""""""
#############################
"""""""""""""""""""""""""""""
""""||"""""""""//""""""""""""
""""||""""""//"""""""""""""""
""""||"""//""""""""""""""""""
""""||//"""""""""""""""""""""
""""||\\"""""""""""""""""""""
""""||"""\\""""""""""""""""""
""""||""""""\\"""""""""""""""
""""||"""""""""\\""""""""""""
"""""""""""""""""""""""""""""
#############################
*/