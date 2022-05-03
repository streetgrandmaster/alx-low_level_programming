#include "main.h"

/**
 *  read_textfile - read a certain size and prints to std output
 * filename: file to read from
 * letters: size to read
 * return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters){
    int file_desc; // file descriptor
    ssize_t n_read, n_wrote;
    char buffer;

    if (filename == NULL)
        return (0);

    // open
    file_desc = open(filename, O_RDONLY);
    if (file_desc == -1)
        return (0);

    // malloc buffer
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    // read
    n_read = read(file_desc, buffer, letters);
    if (n_read == -1){
        free(buffer);
        close(file_desc);
        return (0);
    }

    // write
    n_wrote = write(STDOUT_FILENO, buffer, n_read);
    if (n_wrote == -1){
        free(buffer);
        close(file_desc);
        return (0);
    }

    close(file_desc);
    return (n_read);

}
