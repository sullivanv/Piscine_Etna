/*
** my_strcpy.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_strcpy
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 09:36:31 2015 VITIELLO Sullivan
** Last update Thu Oct  1 09:49:16 2015 VITIELLO Sullivan
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while(src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
