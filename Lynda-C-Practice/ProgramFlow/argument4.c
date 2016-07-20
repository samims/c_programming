/*
 * argument4.c
 * 
 * Copyright 2016 Sam <sam>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

void evaluate(int x);
int main(int argc, char **argv)
{
	int i;
	
	printf("Type an integer values: ");
	scanf("%d",&i);
	evaluate(i);
	
	return 0;
}

void evaluate(int x)
{
	if(x>10)
	{
		printf("%d is greater than 10\n",x);
	}
	else if(x<10)
	{
		printf("%d is less than 10\n",x);
	}
	
	else
	{
	printf("%d is equal to 10\n",x);
}
}
