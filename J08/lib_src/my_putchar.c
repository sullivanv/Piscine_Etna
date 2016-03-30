/*
** my_putchar.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_putchar
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 09:56:23 2015 VITIELLO Sullivan
** Last update Mon Sep 28 11:22:43 2015 VITIELLO Sullivan
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
