/*
 * argument3.c
 * 
 * Copyright 2016 Sam <sam@hp>
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

void bar(char c, int count);
int main(int argc, char **argv)
{	int x;
	
	for(x = 1; x<11; x++)
	{
		bar('*', x*2);
	}
	return 0;
}

void bar(char c, int count)
{
	int x;
	
	for(x = 0; x<count; x++)
		putchar(c);
	putchar('\n');
}
