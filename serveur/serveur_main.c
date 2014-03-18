/*
** serveur_main.c for  in /home/bauwen_j/rendu/my_git/minitalk/serveur
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Mon Mar 17 16:26:09 2014 bauwen_j
** Last update Mon Mar 17 16:26:09 2014 bauwen_j
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "my.h"

void		start_server(int sig)
{
  int		let;
  static int	lettre[8];
  static int	bit = 0;

  if (sig == SIGUSR1)
    {
      lettre[bit] = 0;
      bit++;
    }
  if (sig == SIGUSR2)
    {
      lettre[bit] = 1;
      bit++;
    }
  if (bit == 8)
    {
      let = get_bin_to_dec(lettre);
      my_putchar(let);
      bit = 0;
    }
}

int	main()
{
  int	pid;

  pid = getpid();
  my_put_nbr(pid);
  signal(SIGUSR1, start_server);
  signal(SIGUSR2, start_server);
  while (1)
    ;
  return (0);
}
