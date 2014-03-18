/*
** get_num.c for  in /home/bauwen_j/rendu/my_git/minitalk/serveur
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Mon Mar 17 16:36:33 2014 bauwen_j
** Last update Mon Mar 17 16:36:33 2014 bauwen_j
*/

#include <stdlib.h>

int	val_in_bin(int i)
{
  int	j;
  int	val;

  j = 0;
  val = 128;
  while (++j != i)
    val = val / 2;
  return (val);
}

int	*get_dec_to_bin(int l)
{
  int	*octet;
  int	i;
  int	val;

  i = 0;
  val = 128;
  if ((octet = malloc(8 * sizeof(int))) == NULL)
    return (NULL);
  while (i < 9)
    {
      if (val <= l)
	{
	  l = l - val;
	  octet[i] = 1;
	}
      else
	octet[i] = 0;
      val = val / 2;
      i++;
    }
  return (octet);
}

int	get_bin_to_dec(int *octet)
{
  int	val;
  int	i;

  i = 7;
  val = 0;
  while (i > -1)
    {
      if (octet[i] == 1)
	val = val + val_in_bin(i + 1);
      i--;
    }
  return (val);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;

  i = 0;
  nbr = 0;
  while (str[i] != 0)
    {
      nbr = (nbr * 10) + (str[i] - 48);
      i++;
    }
  return (nbr);
}
