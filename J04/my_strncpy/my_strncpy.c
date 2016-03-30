/*
** my_strncpy.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_strncpy
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 10:24:43 2015 VITIELLO Sullivan
** Last update Thu Oct  1 10:54:08 2015 VITIELLO Sullivan
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      if (src[i] == '\0')
	{
	  while (i < n)
	    {
	      dest[i] = '\0';
	      i++;
	    }
	}
      else
	{
	  dest[i] = src[i];
	  i++;
	}
    }
  return (dest);
}
