#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: Is a NULL terminated
 * string to write inside the file
 * Return: 1 on Success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, hold;
	char *buff;

	if (!filename)
		return (-1);

	fp = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600);
	if (fp < 0)
		return (-1);

	buff = malloc(sizeof(char) * strlen(text_content));
	if (!buff)
		return (-1);

	if (!text_content)
		text_content = "";
	buff = text_content;

	hold = write(fp, buff, strlen(text_content));

	if (hold < 0)
		return (-1);

	return (1);
}
