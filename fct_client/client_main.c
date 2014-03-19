/*
** client_main.c for  in /home/bauwen_j/rendu/my_git/minitalk/client
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Mon Mar 17 16:43:57 2014 bauwen_j
** Last update Mon Mar 17 16:43:57 2014 bauwen_j
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "my.h"

int	start_client(int pid, char *text)
{
  int	bit;
  int	i;
  int	j;
  int	*oct;

  i = 0;
  while (text[i] != 0)
    {
      if ((oct = get_dec_to_bin(text[i])) == NULL)
	return (-1);
      j = 0;
      while (j < 8)
	{
	  if (oct[j] == 0)
	    bit = SIGUSR1;
	  else
	    bit = SIGUSR2;
	  if (kill(pid, bit) == -1)
	    return (-1);
	  usleep(1);
	  j++;
	}
      i++;
    }
  return (0);
}

int	main(int ac, char **argv)
{
  int	pid;

  if (ac != 3)
    my_putstr("error : this program need two arguments\n");
  else
    {
      pid = my_getnbr(argv[1]);
      if (start_client(pid, argv[2]) == -1)
	my_putstr("error : text don't send\n");
      if (start_client(pid, "\n") == -1)
	my_putstr("error : text don't send\n");
    }
  return (0);
}
