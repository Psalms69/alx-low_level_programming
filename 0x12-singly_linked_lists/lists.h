#ifndef LISTS_H
#define LISTS_H

/*
* Desc: header file containinf prototypes and definitions
*	for all functions and types written in this proj
*/

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *              for Holberton project
 */
typedef struct list_s
{
