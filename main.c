#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    printf("=== Testing get_next_line ===\n");
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Read line: %s", line);
        free(line);
    }

    close(fd);
    return (0);
}
