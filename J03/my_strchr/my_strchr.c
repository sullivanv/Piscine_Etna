/*
** my_strchr.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_strchr
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 09:23:11 2015 VITIELLO Sullivan
** Last update Wed Sep 30 10:35:37 2015 VITIELLO Sullivan
*/

char*	my_strchr(char* str, int c)
{
  while (*str != '\0')
    {
      if (*str == c)
	{
	  return (str);
	}
      str++;
    }
  return (str);
}
