#include "main.h"

/**
 * _strlen - gets length of a string 
 * str - string
 * len - length
 * return: length
 */

int _strlen(char *str)
{
    int len;
    for (len = 0; str[len] != '\0'; len++)
        ;
    return (len);
}

/**
 * create_file - creates file with permissions rw------- and writes content 
 * filename: name given to new file
 * text_content: writes this content into file
 * return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
    int file_desc;
    int n_wrote;

    if (!filename)
        return (-1);


    // create with permissions if file doesn't exist, else truncate
    file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (file_desc == -1)
        return (-1);

    // if text_content is NULL create an empty file
    if (!text_content)
    {
        close(file_desc);
        return (1);
    }

    // write
    n_wrote = write(file_desc, text_content, _strlen(text_content));
    if (n_wrote == -1 || n_wrote != _strlen(text_content))
    {
        close(file_desc);
        return (-1);
    }
    
    close(file_desc);
    return (1);
    
}
