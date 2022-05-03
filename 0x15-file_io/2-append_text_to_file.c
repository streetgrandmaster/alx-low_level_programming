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
 * append_text_to_file - append text and only if file exists
 * filename: file
 * text_content: appends this content into file
 * return: 1 on success, -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int file_desc;
    int n_wrote;

    if (!filename)
        return (-1);

    // open file if it exists
    file_desc = open(filename, O_WRONLY | O_APPEND);
    if (file_desc == -1)
        return (-1);

    // text_content is NULL, do not add anything to the file
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
