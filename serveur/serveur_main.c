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
#include <unistd.h>

void    catch_sig(int sig)
{
  signal(SIGUSR1, catch_sig);
  signal(SIGUSR2, catch_sig);
  if (sig == SIGQUIT)
    {
      my_putstr("Exit\n");
      exit(0);
    }
  else if (sig == SIGHUP)
    my_putstr("prosper youpla boum!!!!\n");
  else if (sig == SIGUSR1)
    my_putstr("");
}

void	start_server()
{
  int	let;
  int	lettre[8];
  int	bit;

  while (42)
    {
      bit = 0;
      while (bit < 8)
	{
	  
	  if ()
	    {
	      lettre[bit];
	      bit++;
	    }
	  else if ()
	    {
	      lettre[bit];	      
	      bit++;
	    }
	}
      
      let = get_bin_to_dec(lettre);
      my_putchar(let);
    }
}

int	main()
{
  int	pid;

  pid = getpid();
  my_put_nbr(pid);
  start_server();
  return (0);
}
