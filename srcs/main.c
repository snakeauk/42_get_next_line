#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"

int main(void)
{
    char    *line;
    int     fd;

    fd = ft_fopen("text", "r");
    while (get_next_line(fd, &line))
    {
        ft_printf("line:%s", line);
        free(line);
    }
    return (0);
}