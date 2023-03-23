/*
 * File: 0-isupper.c
 * Auth: Triumph Nwabuko
 */

#include "main.h"

/**
 * _isupper - this checkes for uppercase characters
 * @c: character to be checked
 * Return: 1 if the character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);

else
	return (0);
}
