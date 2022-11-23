#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
* create_file - a function that create a file
* @filename: a pointer
* @text_content: a pointer
* Return: return
*/
 int create_file(const char *filename, char *text_content)
 {
    int o, w, length = 0;

    if (filename == NULL)
        return (-1);
        
        else if (text_content != NULL)
        {
            for (length = 0; text_content[length];)
                length++;
        }
    o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    w = write(o, text_content, length);

    if (o == -1 || w == -1)
    return (-1);
    close(o);
    return (1);    
 }
