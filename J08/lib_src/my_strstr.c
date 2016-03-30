/*
** my_strstr.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_strstr
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 16:25:26 2015 VITIELLO Sullivan
** Last update Fri Oct  2 19:30:48 2015 VITIELLO Sullivan
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  j = 0;
  while (str[j])
    {
      i = 0;
      while (to_find[i])
	{
	  if (str[j] == to_find[i])
	    return (str + j);
	  i++;
	}
      j++;
    }
  return ("null");
}
