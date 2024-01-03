#include "get_next_line.h"

int main(int argc, char **argv)
{
    int     fd;
    char    *result;
    int     i;

    if (argc != 2)
    {
        printf("*Need one test file as argument*\n");
        return (1);
    }
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        printf("*Can't open file*\n");
        return (2);
    }
    i = 1;
    result = get_next_line(fd);
    if (!result)
        printf("*Nothing in the file*\n");
    while (result)
    {
        printf("1N°%d =%s", (i), result);
        free(result);
        result = get_next_line(fd);
    }
}

// bonus
    // int	main(void)
// {
//     int fd;
    // int	fd2;
//     char *result;
//     int     i;

//     fd = open("TEST.txt", O_RDONLY);
//     fd2 = open("TEST2.txt", O_RDONLY);
//     i = 1;
//     while (i <= 1)
//     {
//         result = get_next_line(fd);
//         printf("1N°%d =%s", (i), result);
//         free(result);
//         i++;
//     }


//     // i = 1;
//     // while (i <= 1)
//     // {
//     //     result = get_next_line(fd2);
//     //     printf("2N°%d =%s", (i), result);
//     //     free(result);
//     //     i++;
//     // }

//     // i = 1;
//     // while (i <= 1)
//     // {
//     //     result = get_next_line(fd);
//     //     printf("1N°%d =%s", (i), result);
//     //     free(result);
//     //     i++;
//     // }

//     // i = 1;
//     // while (i <= 1)
//     // {
//     //     result = get_next_line(fd2);
//     //     printf("2N°%d =%s", (i), result);
//     //     free(result);
//     //     i++;
//     // }
// }