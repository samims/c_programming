/*
 * return3.c
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

int max(int x,int y);
void isLarger(int big);


int main(int argc, char **argv)
{
	int a,b,larger;
	
	printf("Type two integers separated by a space: ");
	scanf("%d %d", &a,&b);
	larger = max(a,b);
	if(a == larger)
		isLarger(a);
	else
		isLarger(b);
	
	return 0;
}

int max(int x, int y)
{
	if(x>y)
		return(x);
	return y;
	}

void isLarger(int big)
{
	printf("Value %d is larger.\n",big);
}

